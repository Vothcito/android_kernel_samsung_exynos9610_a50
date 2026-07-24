#ifndef DEBUG_SNAPSHOT_H
#define DEBUG_SNAPSHOT_H

#include <linux/types.h>

#define DSS_FLAG_REQ                    0
#define DSS_FLAG_IN                     1
#define DSS_FLAG_ON                     2
#define DSS_FLAG_OUT                    3

static inline void dbg_snapshot_clk(void *clock,
                                    const char *func_name,
                                    unsigned long arg,
                                    int mode)
{
}

static inline void dbg_snapshot_pmu(int id,
                                    const char *func_name,
                                    int mode)
{
}

#endif
