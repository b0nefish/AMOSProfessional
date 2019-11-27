#ifndef CLIB_CAMD_PROTOS_H
#define CLIB_CAMD_PROTOS_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/workbench/libs/camd/camd.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <utility/tagitem.h>
#include <midi/camd.h>

__BEGIN_DECLS


#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(APTR, LockCAMD,
         AROS_LPA(ULONG, locktype, D0),
         LIBBASETYPEPTR, CamdBase, 5, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(void, UnlockCAMD,
         AROS_LPA(APTR, lock, A0),
         LIBBASETYPEPTR, CamdBase, 6, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(struct MidiNode *, CreateMidiA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, CamdBase, 7, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(void, DeleteMidi,
         AROS_LPA(struct MidiNode *, midinode, A0),
         LIBBASETYPEPTR, CamdBase, 8, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP2(BOOL, SetMidiAttrsA,
         AROS_LPA(struct MidiNode *, midinode, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, CamdBase, 9, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP2(ULONG, GetMidiAttrsA,
         AROS_LPA(struct MidiNode *, midinode, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, CamdBase, 10, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(struct MidiNode *, NextMidi,
         AROS_LPA(struct MidiNode *, midinode, A0),
         LIBBASETYPEPTR, CamdBase, 11, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(struct MidiNode *, FindMidi,
         AROS_LPA(STRPTR, name, A1),
         LIBBASETYPEPTR, CamdBase, 12, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(void, FlushMidi,
         AROS_LPA(struct MidiNode *, midinode, A0),
         LIBBASETYPEPTR, CamdBase, 13, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP3(struct MidiLink *, AddMidiLinkA,
         AROS_LPA(struct MidiNode *, midinode, A0),
         AROS_LPA(LONG, type, D0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, CamdBase, 14, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(void, RemoveMidiLink,
         AROS_LPA(struct MidiLink *, midilink, A0),
         LIBBASETYPEPTR, CamdBase, 15, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP2(BOOL, SetMidiLinkAttrsA,
         AROS_LPA(struct MidiLink *, midilink, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, CamdBase, 16, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP2(ULONG, GetMidiLinkAttrsA,
         AROS_LPA(struct MidiLink *, midilink, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, CamdBase, 17, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP3(struct MidiLink *, NextClusterLink,
         AROS_LPA(struct MidiCluster *, cluster, A0),
         AROS_LPA(struct MidiLink *, midilink, A1),
         AROS_LPA(LONG, type, D0),
         LIBBASETYPEPTR, CamdBase, 18, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP3(struct MidiLink *, NextMidiLink,
         AROS_LPA(struct MidiNode *, midinode, A0),
         AROS_LPA(struct MidiLink *, midilink, A1),
         AROS_LPA(LONG, type, D0),
         LIBBASETYPEPTR, CamdBase, 19, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(BOOL, MidiLinkConnected,
         AROS_LPA(struct MidiLink *, midilink, A0),
         LIBBASETYPEPTR, CamdBase, 20, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(struct MidiCluster *, NextCluster,
         AROS_LPA(struct MidiCluster *, last, A0),
         LIBBASETYPEPTR, CamdBase, 21, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(struct MidiCluster *, FindCluster,
         AROS_LPA(STRPTR, name, A0),
         LIBBASETYPEPTR, CamdBase, 22, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP2(void, PutMidi,
         AROS_LPA(struct MidiLink *, link, A0),
         AROS_LPA(ULONG, msg, D0),
         LIBBASETYPEPTR, CamdBase, 23, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP2(BOOL, GetMidi,
         AROS_LPA(struct MidiNode *, midinode, A0),
         AROS_LPA(MidiMsg *, msg, A1),
         LIBBASETYPEPTR, CamdBase, 24, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP2(BOOL, WaitMidi,
         AROS_LPA(struct MidiNode *, midinode, A0),
         AROS_LPA(MidiMsg *, msg, A1),
         LIBBASETYPEPTR, CamdBase, 25, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP2(void, PutSysEx,
         AROS_LPA(struct MidiLink *, midilink, A0),
         AROS_LPA(UBYTE *, buffer, A1),
         LIBBASETYPEPTR, CamdBase, 26, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP3(ULONG, GetSysEx,
         AROS_LPA(struct MidiNode *, midinode, A0),
         AROS_LPA(UBYTE *, Buf, A1),
         AROS_LPA(ULONG, len, D0),
         LIBBASETYPEPTR, CamdBase, 27, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(ULONG, QuerySysEx,
         AROS_LPA(struct MidiNode *, midinode, A0),
         LIBBASETYPEPTR, CamdBase, 28, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(void, SkipSysEx,
         AROS_LPA(struct MidiNode *, midinode, A0),
         LIBBASETYPEPTR, CamdBase, 29, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(UBYTE, GetMidiErr,
         AROS_LPA(struct MidiNode *, midinode, A0),
         LIBBASETYPEPTR, CamdBase, 30, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(WORD, MidiMsgType,
         AROS_LPA(MidiMsg *, msg, A0),
         LIBBASETYPEPTR, CamdBase, 31, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(WORD, MidiMsgLen,
         AROS_LPA(ULONG, msg, D0),
         LIBBASETYPEPTR, CamdBase, 32, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP3(void, ParseMidi,
         AROS_LPA(struct MidiLink *, midilink, A0),
         AROS_LPA(UBYTE *, buffer, A1),
         AROS_LPA(ULONG, length, D0),
         LIBBASETYPEPTR, CamdBase, 33, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(struct MidiDeviceData *, OpenMidiDevice,
         AROS_LPA(UBYTE *, name, A0),
         LIBBASETYPEPTR, CamdBase, 34, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(void, CloseMidiDevice,
         AROS_LPA(struct MidiDeviceData *, mididevicedata, A0),
         LIBBASETYPEPTR, CamdBase, 35, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP0(LONG, RethinkCAMD,
         LIBBASETYPEPTR, CamdBase, 36, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(void, StartClusterNotify,
         AROS_LPA(struct ClusterNotifyNode *, cn, A0),
         LIBBASETYPEPTR, CamdBase, 37, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP1(void, EndClusterNotify,
         AROS_LPA(struct ClusterNotifyNode *, cn, A0),
         LIBBASETYPEPTR, CamdBase, 38, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP3(APTR, GoodPutMidi,
         AROS_LPA(struct MidiLink *, midilink, A0),
         AROS_LPA(ULONG, msg, D0),
         AROS_LPA(ULONG, maxbuff, D1),
         LIBBASETYPEPTR, CamdBase, 39, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

#if !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__)
AROS_LP3(BOOL, Midi2Driver,
         AROS_LPA(APTR, driverdata, A0),
         AROS_LPA(ULONG, msg, D0),
         AROS_LPA(ULONG, maxbuff, D1),
         LIBBASETYPEPTR, CamdBase, 40, Camd
);

#endif /* !defined(__CAMD_LIBAPI__) || (41 <= __CAMD_LIBAPI__) */

__END_DECLS

#endif /* CLIB_CAMD_PROTOS_H */
