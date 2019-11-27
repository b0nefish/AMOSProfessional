#ifndef CLIB_REQTOOLS_PROTOS_H
#define CLIB_REQTOOLS_PROTOS_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/workbench/libs/reqtools/reqtools.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/reqtools.h>

struct PWCallBackArgs;
typedef char * (*PWCALLBACKFUNPTR) (long, long, struct PWCallBackArgs *);

/* Prototypes for stubs in reqtoolsstubs.lib */

__BEGIN_DECLS

APTR rtAllocRequest (ULONG type, Tag tag1, ...);
LONG rtChangeReqAttr (APTR req, Tag tag1, ...);
APTR rtFileRequest (struct rtFileRequester * filereq, char *file, const char *title, Tag tag1, ...);
ULONG rtEZRequest (const char *bodyfmt, const char *gadfmt, struct rtReqInfo *reqinfo, struct TagItem *taglist, ...);
ULONG rtEZRequestTags (const char *bodyfmt, const char *gadfmt, struct rtReqInfo *reqinfo, APTR argarray, Tag tag1, ...);
ULONG rtGetString (UBYTE *buffer, ULONG maxchars, const char *title, struct rtReqInfo *reqinfo, Tag tag1, ...);
ULONG rtGetLong (ULONG *longptr, char *title, struct rtReqInfo *reqinfo, Tag tag1, ...);
ULONG rtFontRequest (struct rtFontRequester *fontreq, const char *title, Tag tag1, ...);
LONG rtPaletteRequest (const char *title, struct rtReqInfo *reqinfo, Tag tag1, ...);
IPTR rtReqHandler (struct rtHandlerInfo *handlerinfo, ULONG sigs, Tag tag1, ...);
ULONG rtScreenModeRequest (struct rtScreenModeRequester *screenmodereq, char *title, Tag tag1, ...);

__END_DECLS


__BEGIN_DECLS


#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP2(APTR, rtAllocRequestA,
         AROS_LPA(ULONG, type, D0),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 5, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP1(void, rtFreeRequest,
         AROS_LPA(APTR, req, A1),
         LIBBASETYPEPTR, ReqToolsBase, 6, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP1(void, rtFreeReqBuffer,
         AROS_LPA(APTR, req, A1),
         LIBBASETYPEPTR, ReqToolsBase, 7, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP2(LONG, rtChangeReqAttrA,
         AROS_LPA(APTR, req, A1),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 8, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP4(APTR, rtFileRequestA,
         AROS_LPA(struct rtFileRequester *, filereq, A1),
         AROS_LPA(char *, file, A2),
         AROS_LPA(const char *, title, A3),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 9, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP1(void, rtFreeFileList,
         AROS_LPA(struct rtFileList *, selfile, A0),
         LIBBASETYPEPTR, ReqToolsBase, 10, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP5(ULONG, rtEZRequestA,
         AROS_LPA(const char *, bodyfmt, A1),
         AROS_LPA(const char *, gadfmt, A2),
         AROS_LPA(struct rtReqInfo *, reqinfo, A3),
         AROS_LPA(APTR, argarray, A4),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 11, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP5(ULONG, rtGetStringA,
         AROS_LPA(UBYTE *, buffer, A1),
         AROS_LPA(ULONG, maxchars, D0),
         AROS_LPA(const char *, title, A2),
         AROS_LPA(struct rtReqInfo *, reqinfo, A3),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 12, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP4(ULONG, rtGetLongA,
         AROS_LPA(ULONG *, longptr, A1),
         AROS_LPA(const char *, title, A2),
         AROS_LPA(struct rtReqInfo *, reqinfo, A3),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 13, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP5(BOOL, rtInternalGetPasswordA,
         AROS_LPA(UBYTE *, buffer, A1),
         AROS_LPA(ULONG, checksum, D1),
         AROS_LPA(PWCALLBACKFUNPTR, pwcallback, D2),
         AROS_LPA(struct rtReqInfo *, reqinfo, A3),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 14, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP4(BOOL, rtInternalEnterPasswordA,
         AROS_LPA(UBYTE *, buffer, A1),
         AROS_LPA(PWCALLBACKFUNPTR, pwcallback, D2),
         AROS_LPA(struct rtReqInfo *, reqinfo, A3),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 15, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP3(ULONG, rtFontRequestA,
         AROS_LPA(struct rtFontRequester *, fontreq, A1),
         AROS_LPA(const char *, title, A3),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 16, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP3(LONG, rtPaletteRequestA,
         AROS_LPA(const char *, title, A2),
         AROS_LPA(struct rtReqInfo *, reqinfo, A3),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 17, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP3(IPTR, rtReqHandlerA,
         AROS_LPA(struct rtHandlerInfo *, handlerinfo, A1),
         AROS_LPA(ULONG, sigs, D0),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 18, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP1(void, rtSetWaitPointer,
         AROS_LPA(struct Window *, window, A0),
         LIBBASETYPEPTR, ReqToolsBase, 19, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP3(ULONG, rtGetVScreenSize,
         AROS_LPA(struct Screen *, screen, A0),
         AROS_LPA(ULONG *, widthptr, A1),
         AROS_LPA(ULONG *, heightptr, A2),
         LIBBASETYPEPTR, ReqToolsBase, 20, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP4(void, rtSetReqPosition,
         AROS_LPA(ULONG, reqpos, D0),
         AROS_LPA(struct NewWindow *, nw, A0),
         AROS_LPA(struct Screen *, scr, A1),
         AROS_LPA(struct Window *, win, A2),
         LIBBASETYPEPTR, ReqToolsBase, 21, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP6(void, rtSpread,
         AROS_LPA(ULONG *, posarray, A0),
         AROS_LPA(ULONG *, sizearray, A1),
         AROS_LPA(ULONG, totalsize, D0),
         AROS_LPA(ULONG, min, D1),
         AROS_LPA(ULONG, max, D2),
         AROS_LPA(ULONG, num, D3),
         LIBBASETYPEPTR, ReqToolsBase, 22, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP1(void, rtScreenToFrontSafely,
         AROS_LPA(struct Screen *, screen, A0),
         LIBBASETYPEPTR, ReqToolsBase, 23, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP3(ULONG, rtScreenModeRequestA,
         AROS_LPA(struct rtScreenModeRequester *, screenmodereq, A1),
         AROS_LPA(char *, title, A3),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, ReqToolsBase, 24, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP1(void, rtCloseWindowSafely,
         AROS_LPA(struct Window *, window, A0),
         LIBBASETYPEPTR, ReqToolsBase, 25, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP1(APTR, rtLockWindow,
         AROS_LPA(struct Window *, window, A0),
         LIBBASETYPEPTR, ReqToolsBase, 26, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP2(void, rtUnlockWindow,
         AROS_LPA(struct Window *, window, A0),
         AROS_LPA(APTR, windowlock, A1),
         LIBBASETYPEPTR, ReqToolsBase, 27, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP0(struct ReqToolsPrefs *, rtLockPrefs,
         LIBBASETYPEPTR, ReqToolsBase, 28, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

#if !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__)
AROS_LP0(void, rtUnlockPrefs,
         LIBBASETYPEPTR, ReqToolsBase, 29, ReqTools
);

#endif /* !defined(__REQTOOLS_LIBAPI__) || (39 <= __REQTOOLS_LIBAPI__) */

__END_DECLS

#endif /* CLIB_REQTOOLS_PROTOS_H */
