#ifndef CLIB_REXXSUPPORT_PROTOS_H
#define CLIB_REXXSUPPORT_PROTOS_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/workbench/libs/rexxsupport/rexxsupport.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <rexx/storage.h>

__BEGIN_DECLS


#if !defined(__REXXSUPPORT_LIBAPI__) || (34 <= __REXXSUPPORT_LIBAPI__)
AROS_LP2(ULONG, ArexxDispatch,
         AROS_LPA(struct RexxMsg *, msg, A0),
         AROS_LPA(STRPTR *, _retargstringptr, A1),
         LIBBASETYPEPTR, RexxSupportBase, 5, RexxSupport
);

#endif /* !defined(__REXXSUPPORT_LIBAPI__) || (34 <= __REXXSUPPORT_LIBAPI__) */

#if !defined(__REXXSUPPORT_LIBAPI__) || (34 <= __REXXSUPPORT_LIBAPI__)
AROS_LP1(void, ClosePortRsrc,
         AROS_LPA(struct RexxRsrc *, rsrc, A0),
         LIBBASETYPEPTR, RexxSupportBase, 6, RexxSupport
);

#endif /* !defined(__REXXSUPPORT_LIBAPI__) || (34 <= __REXXSUPPORT_LIBAPI__) */

__END_DECLS

#endif /* CLIB_REXXSUPPORT_PROTOS_H */
