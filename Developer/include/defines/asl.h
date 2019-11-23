#ifndef DEFINES_ASL_H
#define DEFINES_ASL_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/workbench/libs/asl/asl.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

/*
    Desc: Defines for asl
*/

#include <aros/libcall.h>
#include <exec/types.h>
#include <aros/symbolsets.h>
#include <aros/preprocessor/variadic/cast2iptr.hpp>

#if !defined(__ASL_LIBBASE)
#    define __ASL_LIBBASE AslBase
#endif

__BEGIN_DECLS


#if !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__)

#define __AllocFileRequest_WB(__AslBase) ({\
        AROS_LIBREQ(AslBase,36)\
        AROS_LC0(struct FileRequester *, AllocFileRequest, \
        struct Library *, (__AslBase), 5, Asl);\
})

#define AllocFileRequest() \
    __AllocFileRequest_WB(__ASL_LIBBASE)

#endif /* !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__) */

#if !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__)

#define __FreeFileRequest_WB(__AslBase, __arg1) ({\
        AROS_LIBREQ(AslBase,36)\
        AROS_LC1NR(void, FreeFileRequest, \
                  AROS_LCA(struct FileRequester *,(__arg1),A0), \
        struct Library *, (__AslBase), 6, Asl);\
})

#define FreeFileRequest(arg1) \
    __FreeFileRequest_WB(__ASL_LIBBASE, (arg1))

#endif /* !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__) */

#if !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__)

#define __RequestFile_WB(__AslBase, __arg1) ({\
        AROS_LIBREQ(AslBase,36)\
        AROS_LC1(BOOL, RequestFile, \
                  AROS_LCA(struct FileRequester *,(__arg1),A0), \
        struct Library *, (__AslBase), 7, Asl);\
})

#define RequestFile(arg1) \
    __RequestFile_WB(__ASL_LIBBASE, (arg1))

#endif /* !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__) */

#if !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__)

#define __AllocAslRequest_WB(__AslBase, __arg1, __arg2) ({\
        AROS_LIBREQ(AslBase,36)\
        AROS_LC2(APTR, AllocAslRequest, \
                  AROS_LCA(ULONG,(__arg1),D0), \
                  AROS_LCA(struct TagItem *,(__arg2),A0), \
        struct Library *, (__AslBase), 8, Asl);\
})

#define AllocAslRequest(arg1, arg2) \
    __AllocAslRequest_WB(__ASL_LIBBASE, (arg1), (arg2))

#if !defined(NO_INLINE_STDARG) && !defined(ASL_NO_INLINE_STDARG)
#define AllocAslRequestTags(arg1, ...) \
({ \
    const IPTR AllocAslRequest_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    AllocAslRequest((arg1), (struct TagItem *)(AllocAslRequest_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__) */

#if !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__)

#define __FreeAslRequest_WB(__AslBase, __arg1) ({\
        AROS_LIBREQ(AslBase,36)\
        AROS_LC1NR(void, FreeAslRequest, \
                  AROS_LCA(APTR,(__arg1),A0), \
        struct Library *, (__AslBase), 9, Asl);\
})

#define FreeAslRequest(arg1) \
    __FreeAslRequest_WB(__ASL_LIBBASE, (arg1))

#endif /* !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__) */

#if !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__)

#define __AslRequest_WB(__AslBase, __arg1, __arg2) ({\
        AROS_LIBREQ(AslBase,36)\
        AROS_LC2(BOOL, AslRequest, \
                  AROS_LCA(APTR,(__arg1),A0), \
                  AROS_LCA(struct TagItem *,(__arg2),A1), \
        struct Library *, (__AslBase), 10, Asl);\
})

#define AslRequest(arg1, arg2) \
    __AslRequest_WB(__ASL_LIBBASE, (arg1), (arg2))

#if !defined(NO_INLINE_STDARG) && !defined(ASL_NO_INLINE_STDARG)
#define AslRequestTags(arg1, ...) \
({ \
    const IPTR AslRequest_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    AslRequest((arg1), (struct TagItem *)(AslRequest_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__ASL_LIBAPI__) || (36 <= __ASL_LIBAPI__) */

#if !defined(__ASL_LIBAPI__) || (50 <= __ASL_LIBAPI__)

#define __AbortAslRequest_WB(__AslBase, __arg1) ({\
        AROS_LIBREQ(AslBase,50)\
        AROS_LC1NR(void, AbortAslRequest, \
                  AROS_LCA(APTR,(__arg1),A0), \
        struct Library *, (__AslBase), 13, Asl);\
})

#define AbortAslRequest(arg1) \
    __AbortAslRequest_WB(__ASL_LIBBASE, (arg1))

#endif /* !defined(__ASL_LIBAPI__) || (50 <= __ASL_LIBAPI__) */

#if !defined(__ASL_LIBAPI__) || (50 <= __ASL_LIBAPI__)

#define __ActivateAslRequest_WB(__AslBase, __arg1) ({\
        AROS_LIBREQ(AslBase,50)\
        AROS_LC1NR(void, ActivateAslRequest, \
                  AROS_LCA(APTR,(__arg1),A0), \
        struct Library *, (__AslBase), 14, Asl);\
})

#define ActivateAslRequest(arg1) \
    __ActivateAslRequest_WB(__ASL_LIBBASE, (arg1))

#endif /* !defined(__ASL_LIBAPI__) || (50 <= __ASL_LIBAPI__) */

__END_DECLS

#endif /* DEFINES_ASL_H*/
