# SPDX-License-Identifier: GPL-2.0+

dtb-$(CONFIG_TARGET_ANDES_AE350) += ae350_32.dtb ae350_64.dtb
dtb-$(CONFIG_TARGET_BANANAPI_F3) += k1-bananapi-f3.dtb
dtb-$(CONFIG_TARGET_K230_CANMV) += k230-canmv.dtb
dtb-$(CONFIG_TARGET_MICROCHIP_ICICLE) += mpfs-icicle-kit.dtb
dtb-$(CONFIG_TARGET_MILKV_DUO) += cv1800b-milkv-duo.dtb
dtb-$(CONFIG_TARGET_LICHEERV_NANO) += sg2002-licheerv-nano-b.dtb
dtb-$(CONFIG_TARGET_QEMU_VIRT) += qemu-virt32.dtb qemu-virt64.dtb
dtb-$(CONFIG_TARGET_OPENPITON_RISCV64) += openpiton-riscv64.dtb
dtb-$(CONFIG_TARGET_SIFIVE_UNLEASHED) += hifive-unleashed-a00.dtb
dtb-$(CONFIG_TARGET_SIFIVE_UNMATCHED) += hifive-unmatched-a00.dtb
dtb-$(CONFIG_TARGET_SIPEED_MAIX) += k210-maix-bit.dtb
dtb-$(CONFIG_TARGET_TH1520_LPI4A) += th1520-lichee-pi-4a.dtb
dtb-$(CONFIG_TARGET_XILINX_MBV) += xilinx-mbv32.dtb
dtb-$(CONFIG_TARGET_XILINX_MBV) += xilinx-mbv64.dtb
dtb-$(CONFIG_TARGET_ASPEED_AST2700_IBEX) += ast2700-ibex.dtb

include $(srctree)/scripts/Makefile.dts

# Add any required device tree compiler flags here
DTC_FLAGS += -R 4
