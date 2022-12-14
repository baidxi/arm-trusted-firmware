#include <errno.h>
#include <string.h>

#include <arch_helpers.h>
#include <common/debug.h>
#include <drivers/allwinner/axp.h>
#include <drivers/allwinner/sunxi_rsb.h>
#include <lib/mmio.h>

#include <sunxi_cpucfg.h>
#include <sunxi_def.h>
#include <sunxi_mmap.h>
#include <sunxi_private.h>

int sunxi_pmic_setup(uint16_t socid, const void *fdt)
{
	return 0;
}

void sunxi_cpu_power_off_self(void)
{

}

void sunxi_power_down(void)
{

}
