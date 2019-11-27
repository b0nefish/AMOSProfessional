#ifndef DEFINES_RAMDRIVE_H
#define DEFINES_RAMDRIVE_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/workbench/devs/ramdrive.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

/*
    Desc: Defines for ramdrive
*/

#include <aros/libcall.h>
#include <exec/types.h>
#include <aros/symbolsets.h>
#include <aros/preprocessor/variadic/cast2iptr.hpp>

#if !defined(__RAMDRIVE_LIBBASE)
#    define __RAMDRIVE_LIBBASE RamdriveBase
#endif

__BEGIN_DECLS


#if !defined(__RAMDRIVE_LIBAPI__) || (0 <= __RAMDRIVE_LIBAPI__)

#define __killrad0_WB(__RamdriveBase) ({\
        AROS_LIBREQ(RamdriveBase,0)\
        AROS_LC0(STRPTR, killrad0, \
        struct Device *, (__RamdriveBase), 7, Ramdrive);\
})

#define killrad0() \
    __killrad0_WB(__RAMDRIVE_LIBBASE)

#endif /* !defined(__RAMDRIVE_LIBAPI__) || (0 <= __RAMDRIVE_LIBAPI__) */

#if !defined(__RAMDRIVE_LIBAPI__) || (0 <= __RAMDRIVE_LIBAPI__)

#define __killrad_WB(__RamdriveBase, __arg1) ({\
        AROS_LIBREQ(RamdriveBase,0)\
        AROS_LC1(STRPTR, killrad, \
                  AROS_LCA(ULONG,(__arg1),D0), \
        struct Device *, (__RamdriveBase), 8, Ramdrive);\
})

#define killrad(arg1) \
    __killrad_WB(__RAMDRIVE_LIBBASE, (arg1))

#endif /* !defined(__RAMDRIVE_LIBAPI__) || (0 <= __RAMDRIVE_LIBAPI__) */

__END_DECLS

#endif /* DEFINES_RAMDRIVE_H*/
