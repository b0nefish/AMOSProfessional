#ifndef DEFINES_UTILITY_H
#define DEFINES_UTILITY_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/rom/utility/utility.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

/*
    Desc: Defines for utility
*/

#include <aros/libcall.h>
#include <exec/types.h>
#include <aros/symbolsets.h>
#include <aros/preprocessor/variadic/cast2iptr.hpp>

#if !defined(__UTILITY_LIBBASE)
#  if !defined(__NOLIBBASE__) && !defined(__UTILITY_NOLIBBASE__)
#    define __UTILITY_LIBBASE __aros_getbase_UtilityBase()
#  else
#    define __UTILITY_LIBBASE UtilityBase
#  endif
#endif

__BEGIN_DECLS


#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __FindTagItem_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC2(struct TagItem *, FindTagItem, \
                  AROS_LCA(Tag,(__arg1),D0), \
                  AROS_LCA(const struct TagItem *,(__arg2),A0), \
        struct UtilityBase *, (__UtilityBase), 5, Utility);\
})

#define FindTagItem(arg1, arg2) \
    __FindTagItem_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __GetTagData_WB(__UtilityBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC3(IPTR, GetTagData, \
                  AROS_LCA(Tag,(__arg1),D0), \
                  AROS_LCA(IPTR,(__arg2),D1), \
                  AROS_LCA(const struct TagItem *,(__arg3),A0), \
        struct UtilityBase *, (__UtilityBase), 6, Utility);\
})

#define GetTagData(arg1, arg2, arg3) \
    __GetTagData_WB(__UTILITY_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __PackBoolTags_WB(__UtilityBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC3(ULONG, PackBoolTags, \
                  AROS_LCA(ULONG,(__arg1),D0), \
                  AROS_LCA(struct TagItem *,(__arg2),A0), \
                  AROS_LCA(struct TagItem *,(__arg3),A1), \
        struct UtilityBase *, (__UtilityBase), 7, Utility);\
})

#define PackBoolTags(arg1, arg2, arg3) \
    __PackBoolTags_WB(__UTILITY_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __NextTagItem_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC1(struct TagItem *, NextTagItem, \
                  AROS_LCA(struct TagItem **,(__arg1),A0), \
        struct UtilityBase *, (__UtilityBase), 8, Utility);\
})

#define NextTagItem(arg1) \
    __NextTagItem_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __FilterTagChanges_WB(__UtilityBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC3NR(void, FilterTagChanges, \
                  AROS_LCA(struct TagItem *,(__arg1),A0), \
                  AROS_LCA(const struct TagItem *,(__arg2),A1), \
                  AROS_LCA(BOOL,(__arg3),D0), \
        struct UtilityBase *, (__UtilityBase), 9, Utility);\
})

#define FilterTagChanges(arg1, arg2, arg3) \
    __FilterTagChanges_WB(__UTILITY_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __MapTags_WB(__UtilityBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC3NR(void, MapTags, \
                  AROS_LCA(struct TagItem *,(__arg1),A0), \
                  AROS_LCA(struct TagItem *,(__arg2),A1), \
                  AROS_LCA(ULONG,(__arg3),D0), \
        struct UtilityBase *, (__UtilityBase), 10, Utility);\
})

#define MapTags(arg1, arg2, arg3) \
    __MapTags_WB(__UTILITY_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __AllocateTagItems_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC1(struct TagItem *, AllocateTagItems, \
                  AROS_LCA(ULONG,(__arg1),D0), \
        struct UtilityBase *, (__UtilityBase), 11, Utility);\
})

#define AllocateTagItems(arg1) \
    __AllocateTagItems_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __CloneTagItems_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC1(struct TagItem *, CloneTagItems, \
                  AROS_LCA(const struct TagItem *,(__arg1),A0), \
        struct UtilityBase *, (__UtilityBase), 12, Utility);\
})

#define CloneTagItems(arg1) \
    __CloneTagItems_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __FreeTagItems_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC1NR(void, FreeTagItems, \
                  AROS_LCA(struct TagItem *,(__arg1),A0), \
        struct UtilityBase *, (__UtilityBase), 13, Utility);\
})

#define FreeTagItems(arg1) \
    __FreeTagItems_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __RefreshTagItemClones_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC2NR(void, RefreshTagItemClones, \
                  AROS_LCA(struct TagItem *,(__arg1),A0), \
                  AROS_LCA(const struct TagItem *,(__arg2),A1), \
        struct UtilityBase *, (__UtilityBase), 14, Utility);\
})

#define RefreshTagItemClones(arg1, arg2) \
    __RefreshTagItemClones_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __TagInArray_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC2(BOOL, TagInArray, \
                  AROS_LCA(Tag,(__arg1),D0), \
                  AROS_LCA(Tag *,(__arg2),A0), \
        struct UtilityBase *, (__UtilityBase), 15, Utility);\
})

#define TagInArray(arg1, arg2) \
    __TagInArray_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __FilterTagItems_WB(__UtilityBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC3(ULONG, FilterTagItems, \
                  AROS_LCA(struct TagItem *,(__arg1),A0), \
                  AROS_LCA(Tag *,(__arg2),A1), \
                  AROS_LCA(ULONG,(__arg3),D0), \
        struct UtilityBase *, (__UtilityBase), 16, Utility);\
})

#define FilterTagItems(arg1, arg2, arg3) \
    __FilterTagItems_WB(__UTILITY_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __CallHookPkt_WB(__UtilityBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC3(IPTR, CallHookPkt, \
                  AROS_LCA(struct Hook *,(__arg1),A0), \
                  AROS_LCA(APTR,(__arg2),A2), \
                  AROS_LCA(APTR,(__arg3),A1), \
        struct UtilityBase *, (__UtilityBase), 17, Utility);\
})

#define CallHookPkt(arg1, arg2, arg3) \
    __CallHookPkt_WB(__UTILITY_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __Amiga2Date_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC2NR(void, Amiga2Date, \
                  AROS_LCA(ULONG,(__arg1),D0), \
                  AROS_LCA(struct ClockData *,(__arg2),A0), \
        struct UtilityBase *, (__UtilityBase), 20, Utility);\
})

#define Amiga2Date(arg1, arg2) \
    __Amiga2Date_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __Date2Amiga_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC1(ULONG, Date2Amiga, \
                  AROS_LCA(struct ClockData *,(__arg1),A0), \
        struct UtilityBase *, (__UtilityBase), 21, Utility);\
})

#define Date2Amiga(arg1) \
    __Date2Amiga_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __CheckDate_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC1(ULONG, CheckDate, \
                  AROS_LCA(struct ClockData *,(__arg1),A0), \
        struct UtilityBase *, (__UtilityBase), 22, Utility);\
})

#define CheckDate(arg1) \
    __CheckDate_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __SMult32_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC2(LONG, SMult32, \
                  AROS_LCA(LONG,(__arg1),D0), \
                  AROS_LCA(LONG,(__arg2),D1), \
        struct UtilityBase *, (__UtilityBase), 23, Utility);\
})

#define SMult32(arg1, arg2) \
    __SMult32_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __UMult32_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC2(ULONG, UMult32, \
                  AROS_LCA(ULONG,(__arg1),D0), \
                  AROS_LCA(ULONG,(__arg2),D1), \
        struct UtilityBase *, (__UtilityBase), 24, Utility);\
})

#define UMult32(arg1, arg2) \
    __UMult32_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __SDivMod32_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC2(QUAD, SDivMod32, \
                  AROS_LCA(LONG,(__arg1),D0), \
                  AROS_LCA(LONG,(__arg2),D1), \
        struct UtilityBase *, (__UtilityBase), 25, Utility);\
})

#define SDivMod32(arg1, arg2) \
    __SDivMod32_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__)

#define __UDivMod32_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,36)\
        AROS_LC2(ULONG, UDivMod32, \
                  AROS_LCA(ULONG,(__arg1),D0), \
                  AROS_LCA(ULONG,(__arg2),D1), \
        struct UtilityBase *, (__UtilityBase), 26, Utility);\
})

#define UDivMod32(arg1, arg2) \
    __UDivMod32_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (36 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (37 <= __UTILITY_LIBAPI__)

#define __Stricmp_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,37)\
        AROS_LC2(LONG, Stricmp, \
                  AROS_LCA(CONST_STRPTR,(__arg1),A0), \
                  AROS_LCA(CONST_STRPTR,(__arg2),A1), \
        struct UtilityBase *, (__UtilityBase), 27, Utility);\
})

#define Stricmp(arg1, arg2) \
    __Stricmp_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (37 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (37 <= __UTILITY_LIBAPI__)

#define __Strnicmp_WB(__UtilityBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(UtilityBase,37)\
        AROS_LC3(LONG, Strnicmp, \
                  AROS_LCA(CONST_STRPTR,(__arg1),A0), \
                  AROS_LCA(CONST_STRPTR,(__arg2),A1), \
                  AROS_LCA(LONG,(__arg3),D0), \
        struct UtilityBase *, (__UtilityBase), 28, Utility);\
})

#define Strnicmp(arg1, arg2, arg3) \
    __Strnicmp_WB(__UTILITY_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__UTILITY_LIBAPI__) || (37 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (37 <= __UTILITY_LIBAPI__)

#define __ToUpper_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,37)\
        AROS_LC1(UBYTE, ToUpper, \
                  AROS_LCA(ULONG,(__arg1),D0), \
        struct UtilityBase *, (__UtilityBase), 29, Utility);\
})

#define ToUpper(arg1) \
    __ToUpper_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (37 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (37 <= __UTILITY_LIBAPI__)

#define __ToLower_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,37)\
        AROS_LC1(UBYTE, ToLower, \
                  AROS_LCA(ULONG,(__arg1),D0), \
        struct UtilityBase *, (__UtilityBase), 30, Utility);\
})

#define ToLower(arg1) \
    __ToLower_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (37 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __ApplyTagChanges_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC2NR(void, ApplyTagChanges, \
                  AROS_LCA(struct TagItem *,(__arg1),A0), \
                  AROS_LCA(struct TagItem *,(__arg2),A1), \
        struct UtilityBase *, (__UtilityBase), 31, Utility);\
})

#define ApplyTagChanges(arg1, arg2) \
    __ApplyTagChanges_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __SMult64_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC2(QUAD, SMult64, \
                  AROS_LCA(LONG,(__arg1),D0), \
                  AROS_LCA(LONG,(__arg2),D1), \
        struct UtilityBase *, (__UtilityBase), 33, Utility);\
})

#define SMult64(arg1, arg2) \
    __SMult64_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __UMult64_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC2(UQUAD, UMult64, \
                  AROS_LCA(ULONG,(__arg1),D0), \
                  AROS_LCA(ULONG,(__arg2),D1), \
        struct UtilityBase *, (__UtilityBase), 34, Utility);\
})

#define UMult64(arg1, arg2) \
    __UMult64_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __PackStructureTags_WB(__UtilityBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC3(ULONG, PackStructureTags, \
                  AROS_LCA(APTR,(__arg1),A0), \
                  AROS_LCA(ULONG *,(__arg2),A1), \
                  AROS_LCA(struct TagItem *,(__arg3),A2), \
        struct UtilityBase *, (__UtilityBase), 35, Utility);\
})

#define PackStructureTags(arg1, arg2, arg3) \
    __PackStructureTags_WB(__UTILITY_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __UnpackStructureTags_WB(__UtilityBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC3(ULONG, UnpackStructureTags, \
                  AROS_LCA(APTR,(__arg1),A0), \
                  AROS_LCA(ULONG *,(__arg2),A1), \
                  AROS_LCA(struct TagItem *,(__arg3),A2), \
        struct UtilityBase *, (__UtilityBase), 36, Utility);\
})

#define UnpackStructureTags(arg1, arg2, arg3) \
    __UnpackStructureTags_WB(__UTILITY_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __AddNamedObject_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC2(BOOL, AddNamedObject, \
                  AROS_LCA(struct NamedObject *,(__arg1),A0), \
                  AROS_LCA(struct NamedObject *,(__arg2),A1), \
        struct UtilityBase *, (__UtilityBase), 37, Utility);\
})

#define AddNamedObject(arg1, arg2) \
    __AddNamedObject_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __AllocNamedObjectA_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC2(struct NamedObject *, AllocNamedObjectA, \
                  AROS_LCA(CONST_STRPTR,(__arg1),A0), \
                  AROS_LCA(struct TagItem *,(__arg2),A1), \
        struct UtilityBase *, (__UtilityBase), 38, Utility);\
})

#define AllocNamedObjectA(arg1, arg2) \
    __AllocNamedObjectA_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#if !defined(NO_INLINE_STDARG) && !defined(UTILITY_NO_INLINE_STDARG)
#define AllocNamedObject(arg1, ...) \
({ \
    const IPTR AllocNamedObjectA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    AllocNamedObjectA((arg1), (struct TagItem *)(AllocNamedObjectA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __AttemptRemNamedObject_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC1(LONG, AttemptRemNamedObject, \
                  AROS_LCA(struct NamedObject *,(__arg1),A0), \
        struct UtilityBase *, (__UtilityBase), 39, Utility);\
})

#define AttemptRemNamedObject(arg1) \
    __AttemptRemNamedObject_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __FindNamedObject_WB(__UtilityBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC3(struct NamedObject *, FindNamedObject, \
                  AROS_LCA(struct NamedObject *,(__arg1),A0), \
                  AROS_LCA(CONST_STRPTR,(__arg2),A1), \
                  AROS_LCA(struct NamedObject *,(__arg3),A2), \
        struct UtilityBase *, (__UtilityBase), 40, Utility);\
})

#define FindNamedObject(arg1, arg2, arg3) \
    __FindNamedObject_WB(__UTILITY_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __FreeNamedObject_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC1NR(void, FreeNamedObject, \
                  AROS_LCA(struct NamedObject *,(__arg1),A0), \
        struct UtilityBase *, (__UtilityBase), 41, Utility);\
})

#define FreeNamedObject(arg1) \
    __FreeNamedObject_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __NamedObjectName_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC1(STRPTR, NamedObjectName, \
                  AROS_LCA(struct NamedObject *,(__arg1),A0), \
        struct UtilityBase *, (__UtilityBase), 42, Utility);\
})

#define NamedObjectName(arg1) \
    __NamedObjectName_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __ReleaseNamedObject_WB(__UtilityBase, __arg1) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC1NR(void, ReleaseNamedObject, \
                  AROS_LCA(struct NamedObject *,(__arg1),A0), \
        struct UtilityBase *, (__UtilityBase), 43, Utility);\
})

#define ReleaseNamedObject(arg1) \
    __ReleaseNamedObject_WB(__UTILITY_LIBBASE, (arg1))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __RemNamedObject_WB(__UtilityBase, __arg1, __arg2) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC2NR(void, RemNamedObject, \
                  AROS_LCA(struct NamedObject *,(__arg1),A0), \
                  AROS_LCA(struct Message *,(__arg2),A1), \
        struct UtilityBase *, (__UtilityBase), 44, Utility);\
})

#define RemNamedObject(arg1, arg2) \
    __RemNamedObject_WB(__UTILITY_LIBBASE, (arg1), (arg2))

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

#if !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__)

#define __GetUniqueID_WB(__UtilityBase) ({\
        AROS_LIBREQ(UtilityBase,39)\
        AROS_LC0(ULONG, GetUniqueID, \
        struct UtilityBase *, (__UtilityBase), 45, Utility);\
})

#define GetUniqueID() \
    __GetUniqueID_WB(__UTILITY_LIBBASE)

#endif /* !defined(__UTILITY_LIBAPI__) || (39 <= __UTILITY_LIBAPI__) */

__END_DECLS

#endif /* DEFINES_UTILITY_H*/
