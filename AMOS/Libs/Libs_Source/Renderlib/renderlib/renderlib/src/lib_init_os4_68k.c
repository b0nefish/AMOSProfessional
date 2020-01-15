/*
** This file was automatically generated by fdtrans.
** Do not edit it by hand. Instead, edit the sfd file
** that was used to generate this file
*/

#ifdef __USE_INLINE__
#undef __USE_INLINE__
#endif
#ifndef __NOGLOBALIFACE__
#define __NOGLOBALIFACE__
#endif

#include <exec/interfaces.h>
#include <exec/libraries.h>
#include <exec/emulation.h>
#include <interfaces/exec.h>
#include <interfaces/Render.h>
#include <proto/Render.h>



STATIC ULONG stub_OpenPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct LibraryManagerInterface *Self = (struct LibraryManagerInterface *) ExtLib->ILibrary;

	return (ULONG) Self->Open(0);
}
struct EmuTrap stub_Open = { TRAPINST, TRAPTYPE, stub_OpenPPC };

STATIC ULONG stub_ClosePPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct LibraryManagerInterface *Self = (struct LibraryManagerInterface *) ExtLib->ILibrary;

	return (ULONG) Self->Close();
}
struct EmuTrap stub_Close = { TRAPINST, TRAPTYPE, stub_ClosePPC };

STATIC ULONG stub_ExpungePPC(ULONG *regarray)
{
	return 0UL;
}
struct EmuTrap stub_Expunge = { TRAPINST, TRAPTYPE, stub_ExpungePPC };

STATIC ULONG stub_ReservedPPC(ULONG *regarray)
{
	return 0UL;
}
struct EmuTrap stub_Reserved = { TRAPINST, TRAPTYPE, stub_ReservedPPC };

static void stub_TurboFillMemPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->TurboFillMem(
		(APTR)regarray[8],
		(ULONG)regarray[0],
		(ULONG)regarray[1]
	);
}
struct EmuTrap stub_TurboFillMem = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_TurboFillMemPPC };

static void stub_TurboCopyMemPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->TurboCopyMem(
		(APTR)regarray[8],
		(APTR)regarray[9],
		(ULONG)regarray[0]
	);
}
struct EmuTrap stub_TurboCopyMem = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_TurboCopyMemPPC };

static APTR stub_CreateRMHandlerAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->CreateRMHandlerA(
		(struct TagItem *)regarray[9]
	);
}
struct EmuTrap stub_CreateRMHandlerA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_CreateRMHandlerAPPC };

static void stub_DeleteRMHandlerPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->DeleteRMHandler(
		(APTR)regarray[8]
	);
}
struct EmuTrap stub_DeleteRMHandler = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_DeleteRMHandlerPPC };

static APTR stub_AllocRenderMemPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->AllocRenderMem(
		(APTR)regarray[8],
		(ULONG)regarray[0]
	);
}
struct EmuTrap stub_AllocRenderMem = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_AllocRenderMemPPC };

static void stub_FreeRenderMemPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->FreeRenderMem(
		(APTR)regarray[8],
		(APTR)regarray[9],
		(ULONG)regarray[0]
	);
}
struct EmuTrap stub_FreeRenderMem = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_FreeRenderMemPPC };

static APTR stub_AllocRenderVecPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->AllocRenderVec(
		(APTR)regarray[8],
		(ULONG)regarray[0]
	);
}
struct EmuTrap stub_AllocRenderVec = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_AllocRenderVecPPC };

static void stub_FreeRenderVecPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->FreeRenderVec(
		(APTR)regarray[8]
	);
}
struct EmuTrap stub_FreeRenderVec = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_FreeRenderVecPPC };

static APTR stub_CreateHistogramAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->CreateHistogramA(
		(struct TagItem *)regarray[9]
	);
}
struct EmuTrap stub_CreateHistogramA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_CreateHistogramAPPC };

static void stub_DeleteHistogramPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->DeleteHistogram(
		(APTR)regarray[8]
	);
}
struct EmuTrap stub_DeleteHistogram = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_DeleteHistogramPPC };

static ULONG stub_QueryHistogramPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->QueryHistogram(
		(APTR)regarray[8],
		(Tag)regarray[0]
	);
}
struct EmuTrap stub_QueryHistogram = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_QueryHistogramPPC };

static ULONG stub_AddRGBPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->AddRGB(
		(APTR)regarray[8],
		(ULONG)regarray[0],
		(ULONG)regarray[1]
	);
}
struct EmuTrap stub_AddRGB = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_AddRGBPPC };

static ULONG stub_AddRGBImageAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->AddRGBImageA(
		(APTR)regarray[8],
		(ULONG *)regarray[9],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_AddRGBImageA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_AddRGBImageAPPC };

static ULONG stub_AddChunkyImageAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->AddChunkyImageA(
		(APTR)regarray[8],
		(UBYTE *)regarray[9],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(APTR)regarray[10],
		(struct TagItem *)regarray[11]
	);
}
struct EmuTrap stub_AddChunkyImageA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_AddChunkyImageAPPC };

static ULONG stub_ExtractPaletteAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->ExtractPaletteA(
		(APTR)regarray[8],
		(ULONG *)regarray[9],
		(UWORD)regarray[0],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_ExtractPaletteA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_ExtractPaletteAPPC };

static ULONG stub_RenderAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->RenderA(
		(ULONG *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(UBYTE *)regarray[9],
		(APTR)regarray[10],
		(struct TagItem *)regarray[11]
	);
}
struct EmuTrap stub_RenderA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_RenderAPPC };

static void stub_Planar2ChunkyAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->Planar2ChunkyA(
		(PLANEPTR *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(UWORD)regarray[2],
		(UWORD)regarray[3],
		(UBYTE *)regarray[9],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_Planar2ChunkyA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_Planar2ChunkyAPPC };

static ULONG stub_Chunky2RGBAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->Chunky2RGBA(
		(UBYTE *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(ULONG *)regarray[9],
		(APTR)regarray[10],
		(struct TagItem *)regarray[11]
	);
}
struct EmuTrap stub_Chunky2RGBA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_Chunky2RGBAPPC };

static void stub_Chunky2BitMapAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->Chunky2BitMapA(
		(UBYTE *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(UWORD)regarray[2],
		(UWORD)regarray[3],
		(struct BitMap *)regarray[9],
		(UWORD)regarray[4],
		(UWORD)regarray[5],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_Chunky2BitMapA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_Chunky2BitMapAPPC };

static APTR stub_CreateScaleEngineAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->CreateScaleEngineA(
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(UWORD)regarray[2],
		(UWORD)regarray[3],
		(struct TagItem *)regarray[9]
	);
}
struct EmuTrap stub_CreateScaleEngineA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_CreateScaleEngineAPPC };

static void stub_DeleteScaleEnginePPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->DeleteScaleEngine(
		(APTR)regarray[8]
	);
}
struct EmuTrap stub_DeleteScaleEngine = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_DeleteScaleEnginePPC };

static ULONG stub_ScaleAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->ScaleA(
		(APTR)regarray[8],
		(APTR)regarray[9],
		(APTR)regarray[10],
		(struct TagItem *)regarray[11]
	);
}
struct EmuTrap stub_ScaleA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_ScaleAPPC };

static ULONG stub_ConvertChunkyAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->ConvertChunkyA(
		(UBYTE *)regarray[8],
		(APTR)regarray[9],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(UBYTE *)regarray[10],
		(APTR)regarray[11],
		(struct TagItem *)regarray[12]
	);
}
struct EmuTrap stub_ConvertChunkyA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_ConvertChunkyAPPC };

static void stub_CreatePenTableAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->CreatePenTableA(
		(UBYTE *)regarray[8],
		(APTR)regarray[9],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(APTR)regarray[10],
		(UBYTE *)regarray[11],
		(struct TagItem *)regarray[12]
	);
}
struct EmuTrap stub_CreatePenTableA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_CreatePenTableAPPC };

static APTR stub_CreatePaletteAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->CreatePaletteA(
		(struct TagItem *)regarray[9]
	);
}
struct EmuTrap stub_CreatePaletteA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_CreatePaletteAPPC };

static void stub_DeletePalettePPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->DeletePalette(
		(APTR)regarray[8]
	);
}
struct EmuTrap stub_DeletePalette = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_DeletePalettePPC };

static void stub_ImportPaletteAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->ImportPaletteA(
		(APTR)regarray[8],
		(APTR)regarray[9],
		(UWORD)regarray[0],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_ImportPaletteA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_ImportPaletteAPPC };

static void stub_ExportPaletteAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->ExportPaletteA(
		(APTR)regarray[8],
		(APTR)regarray[9],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_ExportPaletteA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_ExportPaletteAPPC };

static ULONG stub_CountRGBPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->CountRGB(
		(APTR)regarray[8],
		(ULONG)regarray[0]
	);
}
struct EmuTrap stub_CountRGB = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_CountRGBPPC };

static LONG stub_BestPenPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->BestPen(
		(APTR)regarray[8],
		(ULONG)regarray[0]
	);
}
struct EmuTrap stub_BestPen = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_BestPenPPC };

static void stub_FlushPalettePPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->FlushPalette(
		(APTR)regarray[8]
	);
}
struct EmuTrap stub_FlushPalette = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_FlushPalettePPC };

static ULONG stub_SortPaletteAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->SortPaletteA(
		(APTR)regarray[8],
		(ULONG)regarray[0],
		(struct TagItem *)regarray[9]
	);
}
struct EmuTrap stub_SortPaletteA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_SortPaletteAPPC };

static ULONG stub_AddHistogramAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->AddHistogramA(
		(APTR)regarray[8],
		(APTR)regarray[9],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_AddHistogramA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_AddHistogramAPPC };

static UWORD stub_ScaleOrdinatePPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->ScaleOrdinate(
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(UWORD)regarray[2]
	);
}
struct EmuTrap stub_ScaleOrdinate = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_ScaleOrdinatePPC };

static ULONG * stub_CreateHistogramPointerArrayPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->CreateHistogramPointerArray(
		(APTR)regarray[8]
	);
}
struct EmuTrap stub_CreateHistogramPointerArray = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_CreateHistogramPointerArrayPPC };

static ULONG stub_CountHistogramPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->CountHistogram(
		(APTR)regarray[8]
	);
}
struct EmuTrap stub_CountHistogram = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_CountHistogramPPC };

static APTR stub_CreateMapEngineAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->CreateMapEngineA(
		(APTR)regarray[8],
		(struct TagItem *)regarray[9]
	);
}
struct EmuTrap stub_CreateMapEngineA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_CreateMapEngineAPPC };

static void stub_DeleteMapEnginePPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->DeleteMapEngine(
		(APTR)regarray[8]
	);
}
struct EmuTrap stub_DeleteMapEngine = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_DeleteMapEnginePPC };

static ULONG stub_MapRGBArrayAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->MapRGBArrayA(
		(APTR)regarray[8],
		(ULONG *)regarray[9],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(UBYTE *)regarray[10],
		(struct TagItem *)regarray[11]
	);
}
struct EmuTrap stub_MapRGBArrayA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_MapRGBArrayAPPC };

static LONG stub_RGBArrayDiversityAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->RGBArrayDiversityA(
		(ULONG *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(struct TagItem *)regarray[9]
	);
}
struct EmuTrap stub_RGBArrayDiversityA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_RGBArrayDiversityAPPC };

static LONG stub_ChunkyArrayDiversityAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->ChunkyArrayDiversityA(
		(UBYTE *)regarray[8],
		(APTR)regarray[9],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_ChunkyArrayDiversityA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_ChunkyArrayDiversityAPPC };

static ULONG stub_MapChunkyArrayAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->MapChunkyArrayA(
		(APTR)regarray[8],
		(UBYTE *)regarray[9],
		(APTR)regarray[10],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(UBYTE *)regarray[11],
		(struct TagItem *)regarray[12]
	);
}
struct EmuTrap stub_MapChunkyArrayA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_MapChunkyArrayAPPC };

static void stub_InsertAlphaChannelAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->InsertAlphaChannelA(
		(UBYTE *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(ULONG *)regarray[9],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_InsertAlphaChannelA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_InsertAlphaChannelAPPC };

static void stub_ExtractAlphaChannelAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->ExtractAlphaChannelA(
		(ULONG *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(UBYTE *)regarray[9],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_ExtractAlphaChannelA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_ExtractAlphaChannelAPPC };

static void stub_ApplyAlphaChannelAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->ApplyAlphaChannelA(
		(ULONG *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(ULONG *)regarray[9],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_ApplyAlphaChannelA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_ApplyAlphaChannelAPPC };

static void stub_MixRGBArrayAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->MixRGBArrayA(
		(ULONG *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(ULONG *)regarray[9],
		(UWORD)regarray[2],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_MixRGBArrayA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_MixRGBArrayAPPC };

static APTR stub_AllocRenderVecClearPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->AllocRenderVecClear(
		(APTR)regarray[8],
		(ULONG)regarray[0]
	);
}
struct EmuTrap stub_AllocRenderVecClear = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_AllocRenderVecClearPPC };

static void stub_CreateAlphaArrayAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->CreateAlphaArrayA(
		(ULONG *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(struct TagItem *)regarray[9]
	);
}
struct EmuTrap stub_CreateAlphaArrayA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_CreateAlphaArrayAPPC };

static void stub_MixAlphaChannelAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->MixAlphaChannelA(
		(ULONG *)regarray[8],
		(ULONG *)regarray[9],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(ULONG *)regarray[10],
		(struct TagItem *)regarray[11]
	);
}
struct EmuTrap stub_MixAlphaChannelA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_MixAlphaChannelAPPC };

static void stub_TintRGBArrayAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->TintRGBArrayA(
		(ULONG *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(ULONG)regarray[2],
		(UWORD)regarray[3],
		(ULONG *)regarray[9],
		(struct TagItem *)regarray[10]
	);
}
struct EmuTrap stub_TintRGBArrayA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_TintRGBArrayAPPC };

static ULONG stub_GetPaletteAttrsPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	return Self->GetPaletteAttrs(
		(APTR)regarray[8],
		(ULONG)regarray[0]
	);
}
struct EmuTrap stub_GetPaletteAttrs = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_GetPaletteAttrsPPC };

static void stub_RemapArrayAPPC(ULONG *regarray)
{
	struct Library *Base = (struct Library *) regarray[REG68K_A6/4];
	struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *) ((ULONG)Base + Base->lib_PosSize);
	struct RenderIFace *Self = (struct RenderIFace *) ExtLib->MainIFace;

	Self->RemapArrayA(
		(UBYTE *)regarray[8],
		(UWORD)regarray[0],
		(UWORD)regarray[1],
		(UBYTE *)regarray[9],
		(UBYTE *)regarray[10],
		(struct TagItem *)regarray[11]
	);
}
struct EmuTrap stub_RemapArrayA = { TRAPINST, TRAPTYPE, (ULONG (*)(ULONG *))stub_RemapArrayAPPC };

ULONG VecTable68K[] = {
	(ULONG)&stub_Open,
	(ULONG)&stub_Close,
	(ULONG)&stub_Expunge,
	(ULONG)&stub_Reserved,
	(ULONG)&stub_TurboFillMem,
	(ULONG)&stub_TurboCopyMem,
	(ULONG)&stub_CreateRMHandlerA,
	(ULONG)&stub_DeleteRMHandler,
	(ULONG)&stub_AllocRenderMem,
	(ULONG)&stub_FreeRenderMem,
	(ULONG)&stub_AllocRenderVec,
	(ULONG)&stub_FreeRenderVec,
	(ULONG)&stub_CreateHistogramA,
	(ULONG)&stub_DeleteHistogram,
	(ULONG)&stub_QueryHistogram,
	(ULONG)&stub_AddRGB,
	(ULONG)&stub_AddRGBImageA,
	(ULONG)&stub_AddChunkyImageA,
	(ULONG)&stub_ExtractPaletteA,
	(ULONG)&stub_RenderA,
	(ULONG)&stub_Planar2ChunkyA,
	(ULONG)&stub_Chunky2RGBA,
	(ULONG)&stub_Chunky2BitMapA,
	(ULONG)&stub_CreateScaleEngineA,
	(ULONG)&stub_DeleteScaleEngine,
	(ULONG)&stub_ScaleA,
	(ULONG)&stub_ConvertChunkyA,
	(ULONG)&stub_CreatePenTableA,
	(ULONG)&stub_CreatePaletteA,
	(ULONG)&stub_DeletePalette,
	(ULONG)&stub_ImportPaletteA,
	(ULONG)&stub_ExportPaletteA,
	(ULONG)&stub_CountRGB,
	(ULONG)&stub_BestPen,
	(ULONG)&stub_FlushPalette,
	(ULONG)&stub_SortPaletteA,
	(ULONG)&stub_AddHistogramA,
	(ULONG)&stub_ScaleOrdinate,
	(ULONG)&stub_CreateHistogramPointerArray,
	(ULONG)&stub_CountHistogram,
	(ULONG)&stub_CreateMapEngineA,
	(ULONG)&stub_DeleteMapEngine,
	(ULONG)&stub_MapRGBArrayA,
	(ULONG)&stub_RGBArrayDiversityA,
	(ULONG)&stub_ChunkyArrayDiversityA,
	(ULONG)&stub_MapChunkyArrayA,
	(ULONG)&stub_InsertAlphaChannelA,
	(ULONG)&stub_ExtractAlphaChannelA,
	(ULONG)&stub_ApplyAlphaChannelA,
	(ULONG)&stub_MixRGBArrayA,
	(ULONG)&stub_AllocRenderVecClear,
	(ULONG)&stub_CreateAlphaArrayA,
	(ULONG)&stub_MixAlphaChannelA,
	(ULONG)&stub_TintRGBArrayA,
	(ULONG)&stub_GetPaletteAttrs,
	(ULONG)&stub_RemapArrayA,
	(ULONG)-1
};