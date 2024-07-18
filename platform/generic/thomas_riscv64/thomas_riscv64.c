/*
 * SPDX-License-Identifier: BSD-2-Clause
 *
 */
#include <platform_override.h>
#include <sbi/riscv_asm.h>
#include <sbi_utils/fdt/fdt_helper.h>
#include <sbi_utils/fdt/fdt_fixup.h>
#include <sbi/sbi_console.h>
#include <sbi/riscv_io.h>

static const struct fdt_match thomas_riscv64_match[] = {
	{ .compatible = "thomas,riscv64" },
	{ },
};

static int thomas_riscv64_final_init(bool cold_boot,
				   const struct fdt_match *match)
{
	return 0;
}
const struct platform_override thomas_riscv64 = {
	.match_table = thomas_riscv64_match,
	.final_init = thomas_riscv64_final_init,
};
