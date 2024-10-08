// SPDX-License-Identifier: GPL-2.0+
/*
 * Passing basic information from SPL to U-Boot proper
 *
 * Copyright 2018 Google, Inc
 */

#include <bloblist.h>
#include <handoff.h>
#include <asm/global_data.h>

DECLARE_GLOBAL_DATA_PTR;

void handoff_save_dram(struct spl_handoff *ho)
{
	struct bd_info *bd = gd->bd;
	int i;

	ho->ram_size = gd->ram_size;

	for (i = 0; i < CONFIG_NR_DRAM_BANKS; i++) {
		ho->ram_bank[i].start = bd->bi_dram[i].start;
		ho->ram_bank[i].size = bd->bi_dram[i].size;
	}
}

void handoff_load_dram_size(struct spl_handoff *ho)
{
	gd->ram_size = ho->ram_size;
}

void handoff_load_dram_banks(struct spl_handoff *ho)
{
	struct bd_info *bd = gd->bd;
	int i;

	for (i = 0; i < CONFIG_NR_DRAM_BANKS; i++) {
		bd->bi_dram[i].start = ho->ram_bank[i].start;
		bd->bi_dram[i].size = ho->ram_bank[i].size;
	}
}

struct spl_handoff *handoff_get(void)
{
	struct spl_handoff *handoff;

	handoff = bloblist_find(BLOBLISTT_U_BOOT_SPL_HANDOFF,
				sizeof(struct spl_handoff));
	debug("Found SPL hand-off info %p\n", handoff);

	return handoff;
}
