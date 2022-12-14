SUNXI_BL31_IN_DRAM:=1

SUNXI_PSCI_USE_SCPI	:=	0
SUNXI_PSCI_USE_NATIVE	:=	1

include plat/allwinner/common/allwinner-common.mk

# the above could be overwritten on the command line
ifeq (${SUNXI_PSCI_USE_SCPI}, 1)
    $(error "H616 does not support SCPI PSCI ops")
endif


BL31_SOURCES	+= drivers/allwinner/axp/axp707.c

