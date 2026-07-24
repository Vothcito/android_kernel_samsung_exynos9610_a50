// SPDX-License-Identifier: GPL-2.0

#include <linux/arm-smccc.h>
#include <linux/export.h>

int exynos_smc(unsigned long cmd,
               unsigned long arg1,
               unsigned long arg2,
               unsigned long arg3)
{
        struct arm_smccc_res res;

        arm_smccc_smc(cmd,
                      arg1,
                      arg2,
                      arg3,
                      0,
                      0,
                      0,
                      0,
                      &res);

        return (int)res.a0;
}

EXPORT_SYMBOL_GPL(exynos_smc);
