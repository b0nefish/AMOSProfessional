#ifndef CLIB_NONVOLATILE_PROTOS_H
#define CLIB_NONVOLATILE_PROTOS_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/workbench/libs/nonvolatile/nonvolatile.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


__BEGIN_DECLS


#if !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__)
AROS_LP3(APTR, GetCopyNV,
         AROS_LPA(STRPTR, appName, A0),
         AROS_LPA(STRPTR, itemName, A1),
         AROS_LPA(BOOL, killRequesters, D1),
         LIBBASETYPEPTR, NonvolatileBase, 5, Nonvolatile
);

#endif /* !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__) */

#if !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__)
AROS_LP1(void, FreeNVData,
         AROS_LPA(APTR, data, A0),
         LIBBASETYPEPTR, NonvolatileBase, 6, Nonvolatile
);

#endif /* !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__) */

#if !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__)
AROS_LP5(LONG, StoreNV,
         AROS_LPA(STRPTR, appName, A0),
         AROS_LPA(STRPTR, itemName, A1),
         AROS_LPA(APTR, data, A2),
         AROS_LPA(ULONG, length, D0),
         AROS_LPA(BOOL, killRequesters, D1),
         LIBBASETYPEPTR, NonvolatileBase, 7, Nonvolatile
);

#endif /* !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__) */

#if !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__)
AROS_LP3(BOOL, DeleteNV,
         AROS_LPA(STRPTR, appName, A0),
         AROS_LPA(STRPTR, itemName, A1),
         AROS_LPA(BOOL, killRequesters, D1),
         LIBBASETYPEPTR, NonvolatileBase, 8, Nonvolatile
);

#endif /* !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__) */

#if !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__)
AROS_LP1(struct NVInfo *, GetNVInfo,
         AROS_LPA(BOOL, killRequesters, D1),
         LIBBASETYPEPTR, NonvolatileBase, 9, Nonvolatile
);

#endif /* !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__) */

#if !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__)
AROS_LP2(struct MinList *, GetNVList,
         AROS_LPA(STRPTR, appName, A0),
         AROS_LPA(BOOL, killRequesters, D1),
         LIBBASETYPEPTR, NonvolatileBase, 10, Nonvolatile
);

#endif /* !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__) */

#if !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__)
AROS_LP4(BOOL, SetNVProtection,
         AROS_LPA(STRPTR, appName, A0),
         AROS_LPA(STRPTR, itemName, A1),
         AROS_LPA(LONG, mask, D2),
         AROS_LPA(BOOL, killRequesters, D1),
         LIBBASETYPEPTR, NonvolatileBase, 11, Nonvolatile
);

#endif /* !defined(__NONVOLATILE_LIBAPI__) || (40 <= __NONVOLATILE_LIBAPI__) */

__END_DECLS

#endif /* CLIB_NONVOLATILE_PROTOS_H */
