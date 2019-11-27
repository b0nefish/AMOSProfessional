#ifndef CLIB_ATA_PROTOS_H
#define CLIB_ATA_PROTOS_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/rom/devs/ata/ata.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/devices.h>
#include <exec/io.h>

__BEGIN_DECLS


#if !defined(__ATA_LIBAPI__) || (0 <= __ATA_LIBAPI__)
/* private */

#endif /* !defined(__ATA_LIBAPI__) || (0 <= __ATA_LIBAPI__) */

#if !defined(__ATA_LIBAPI__) || (0 <= __ATA_LIBAPI__)
/* private */

#endif /* !defined(__ATA_LIBAPI__) || (0 <= __ATA_LIBAPI__) */

#if !defined(__ATA_LIBAPI__) || (0 <= __ATA_LIBAPI__)
AROS_LP1(ULONG, GetRdskLba,
         AROS_LPA(struct IORequest *, io, A1),
         LIBBASETYPEPTR, ataBase, 7, ata
);

#endif /* !defined(__ATA_LIBAPI__) || (0 <= __ATA_LIBAPI__) */

#if !defined(__ATA_LIBAPI__) || (0 <= __ATA_LIBAPI__)
AROS_LP1(ULONG, GetBlkSize,
         AROS_LPA(struct IORequest *, io, A1),
         LIBBASETYPEPTR, ataBase, 8, ata
);

#endif /* !defined(__ATA_LIBAPI__) || (0 <= __ATA_LIBAPI__) */

__END_DECLS

#endif /* CLIB_ATA_PROTOS_H */
