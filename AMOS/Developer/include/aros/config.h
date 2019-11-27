#ifndef AROS_CONFIG_H
#define AROS_CONFIG_H
/*
    This is an automatically generated file.
    DO NOT EDIT!

    Edit $(SRCDIR)/configure.in and $(SRCDIR)/config/config.h.in and rerun configure.
*/

#define AROS_FLAVOUR_NATIVE             1
#define AROS_FLAVOUR_STANDALONE         2
#define AROS_FLAVOUR_EMULATION          4
#define AROS_FLAVOUR_LINKLIB            8
#define AROS_FLAVOUR_BINCOMPAT          16

/* Always enabled for ABIv1 */
#define AROS_DOS_PACKETS                1

#define AROS_AMIGAOS_COMPLIANCE         0

#define AROS_FLAVOUR                    (AROS_FLAVOUR_STANDALONE|AROS_FLAVOUR_BINCOMPAT)

#define AROS_NOMINAL_WIDTH            640
#define AROS_NOMINAL_HEIGHT           256
#define AROS_NOMINAL_DEPTH            2

#define AROS_SERIAL_DEBUG               0

#define AROS_PALM_DEBUG_HACK            0

#define AROS_NESTING_SUPERVISOR         0

#define AROS_MUNGWALL_DEBUG             0
#define AROS_STACK_DEBUG                0
#define AROS_MODULES_DEBUG              0
#define USE_XSHM                        
#define USE_VIDMODE                     

#define USE_MMU                         0

#define ENABLE_DBUS                     0
#define ENABLE_X11                      




#endif /* AROS_CONFIG_H */
