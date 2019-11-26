/*********************************************************************
----------------------------------------------------------------------

        $VER: guigfx_initexit.c 1.0
        �1997 Captain Bifat / TEK neoscientists

----------------------------------------------------------------------
*********************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <proto/render.h>
#include <proto/dos.h>
#include <render/render.h>
#include <graphics/gfxbase.h>

#include "guigfx_global.h"


/*********************************************************************

        GetEnv(name)
        
*********************************************************************/

char *GetFileString(char *name)
{
        BPTR fp;
        char *linebuffer = NULL;

        if (fp = Open(name, MODE_OLDFILE))
        {
                if (linebuffer = AllocVec(30, MEMF_ANY))
                {
                        if (FGets(fp, linebuffer, 30) == NULL)
                        {
                                FreeVec(linebuffer);
                                linebuffer = NULL;
                        }
                }
                Close(fp);
        }
        return linebuffer;
}


char *GetEnv(char *name)
{
        char *fnamebuffer;
        char *value = NULL;
        
        if (fnamebuffer = AllocVec(strlen(name) + 30, MEMF_ANY))
        {
                strcpy(fnamebuffer, "ENV:");
                if (AddPart(fnamebuffer, name, strlen(name) + 20))
                {
                        value = GetFileString(fnamebuffer);     
                }
                
                if (!value)
                {
                        strcpy(fnamebuffer, "ENVARC:");
                        if (AddPart(fnamebuffer, name, strlen(name) + 20))
                        {
                                value = GetFileString(fnamebuffer);     
                        }
                }
        
                FreeVec(fnamebuffer);   
        }
        
        return value;
}



/*********************************************************************

        GGFX_Init
        GGFX_Exit

*********************************************************************/

BOOL LIBENT GGFX_Init(void)
{
        char *env;

        UtilityBase = OpenLibrary("utility.library", 37);
        GfxBase = (struct GfxBase *) OpenLibrary("graphics.library", 39);
        DataTypesBase = OpenLibrary("datatypes.library", DATATYPES_VERSION);
        CyberGfxBase = OpenLibrary("cybergraphics.library", CYBERGFX_VERSION);
        DOSBase = (struct DosLibrary *) OpenLibrary("dos.library", 0);
//      MathTransBase = OpenLibrary("mathtrans.library", 0);
        IntuitionBase = (struct IntuitionBase *) OpenLibrary("intuition.library", 0);

        RenderBase = OpenLibrary("render.library", RENDER_VERSION);
        if (!RenderBase)
        {
                RenderBase = OpenLibrary("libs/render.library", RENDER_VERSION);
        }

        if (UtilityBase && GfxBase && RenderBase && 
                DOSBase) // && MathTransBase)
        {
                #ifdef __amigaos4__
                IUtility = (struct UtilityIFace *) GetInterface(UtilityBase, "main", 1, NULL);
                IGraphics = (struct GraphicsIFace *) GetInterface(GfxBase, "main", 1, NULL);
                IDataTypes = (struct DataTypesIFace *) GetInterface(DataTypesBase, "main", 1, NULL);
                ICyberGfx = (struct CyberGfxIFace *) GetInterface(CyberGfxBase, "main", 1, NULL);
                IDOS = (struct DOSIFace *) GetInterface(DOSBase, "main", 1, NULL);
                IIntuition = (struct IntuitionIFace *) GetInterface(IntuitionBase, "main", 1, NULL);
                IRender = (struct RenderIFace *) GetInterface(RenderBase, "main", 1, NULL);
                #endif

                MemHandler = CreateRMHandler(RND_MemType, DEFAULT_RMHTYPE, TAG_DONE);
                if (MemHandler)
                {
                        #ifdef __amigaos4__
                        gfx40 = 1;
                        #else
                        gfx40 = (GfxBase->LibNode.lib_Version >= 40);
                        #endif

                        if (CyberGfxBase)
                        {
                                cgfx41 = (CyberGfxBase->lib_Version >= 41);
                                #ifdef DEBUG
                                if (cgfx41)
                                {
                                        DB(kprintf("Cybergraphics v41 detected.\n"));
                                }
                                #endif


                                //      get env variables
                                
                        //      if (env = getenv("guigfx/autoditherthreshold"))
                                if (env = GetEnv("guigfx/autoditherthreshold"))
                                {
                                        env_autoditherthreshold = atoi(env);
                                //      free(env);
                                        FreeVec(env);
                                }
                                
                                if (cgfx41)
                                {
                                //      if (env = getenv("guigfx/usescalepixelarray"))
                                        if (env = GetEnv("guigfx/usescalepixelarray"))
                                        {
                                                env_usescalepixelarray = (atoi(env) == 1);
                                        //      free(env);
                                                FreeVec(env);
                                        }
                                }

                        //      if (env = getenv("guigfx/usewpa8"))
                                if (env = GetEnv("guigfx/usewpa8"))
                                {
                                        env_usewpa8 = (atoi(env) == 1);
                                //      free(env);
                                        FreeVec(env);
                                }
                        }

                        DB(kprintf("autoditherthreshold: %ld, usescalepixelarray: %ld, usewpa8: %ld\n", env_autoditherthreshold, env_usescalepixelarray, env_usewpa8));

                        return TRUE;
                }
        }

        GGFX_Exit();
        return FALSE;
        
}

void LIBENT GGFX_Exit(void)
{
        if (MemHandler)
        {
                DeleteRMHandler(MemHandler);            //!! eagleplayer
                MemHandler = NULL;
        }

        #ifdef __amigaos4__
        DropInterface((struct Interface *) IRender);
        DropInterface((struct Interface *) IIntuition);
        DropInterface((struct Interface *) IDOS);
        DropInterface((struct Interface *) ICyberGfx);
        DropInterface((struct Interface *) IDataTypes);
        DropInterface((struct Interface *) IGraphics);
        DropInterface((struct Interface *) IUtility);
        #endif

        CloseLibrary(RenderBase);
        RenderBase = NULL;

        CloseLibrary((struct Library *) IntuitionBase);
        IntuitionBase = NULL;

//      CloseLibrary(MathTransBase);
//      MathTransBase = NULL;

        CloseLibrary((struct Library *) DOSBase);
        DOSBase = NULL;

        CloseLibrary(CyberGfxBase);
        CyberGfxBase = NULL;

        CloseLibrary(DataTypesBase);
        DataTypesBase = NULL;

        CloseLibrary((struct Library *) GfxBase);
        GfxBase = NULL;

        CloseLibrary(UtilityBase);
        UtilityBase = NULL;
        
}
