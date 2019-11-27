#ifndef CLIB_SCSI_PROTOS_H
#define CLIB_SCSI_PROTOS_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/rom/devs/scsi/scsi.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/devices.h>
#include <exec/io.h>

__BEGIN_DECLS


#if !defined(__SCSI_LIBAPI__) || (0 <= __SCSI_LIBAPI__)
/* private */

#endif /* !defined(__SCSI_LIBAPI__) || (0 <= __SCSI_LIBAPI__) */

#if !defined(__SCSI_LIBAPI__) || (0 <= __SCSI_LIBAPI__)
/* private */

#endif /* !defined(__SCSI_LIBAPI__) || (0 <= __SCSI_LIBAPI__) */

#if !defined(__SCSI_LIBAPI__) || (0 <= __SCSI_LIBAPI__)
AROS_LP1(ULONG, GetRdskLba,
         AROS_LPA(struct IORequest *, io, A1),
         LIBBASETYPEPTR, SCSIBase, 7, scsi
);

#endif /* !defined(__SCSI_LIBAPI__) || (0 <= __SCSI_LIBAPI__) */

#if !defined(__SCSI_LIBAPI__) || (0 <= __SCSI_LIBAPI__)
AROS_LP1(ULONG, GetBlkSize,
         AROS_LPA(struct IORequest *, io, A1),
         LIBBASETYPEPTR, SCSIBase, 8, scsi
);

#endif /* !defined(__SCSI_LIBAPI__) || (0 <= __SCSI_LIBAPI__) */

__END_DECLS

#endif /* CLIB_SCSI_PROTOS_H */
