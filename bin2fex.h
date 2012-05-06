/*
 * Copyright (C) 2012  Alejandro Mery <amery@geeks.cl>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _SUNXI_TOOLS_BIN2FEX_H
#define _SUNXI_TOOLS_BIN2FEX_H

#include <stdint.h>

struct script_bin_section {
	char name[32];
	int32_t length;
	int32_t offset;
};

struct script_bin_head {
	int32_t sections;
	int32_t version[3];
	struct script_bin_section section[];
};

struct script_bin_entry {
	char name[32];
	int32_t offset;
	int32_t pattern;
};

struct script_bin_gpio_value {
	int32_t port;
	int32_t port_num;
	int32_t mul_sel;
	int32_t pull;
	int32_t drv_level;
	int32_t data;
};

enum script_value_type {
	SCRIPT_VALUE_TYPE_SINGLE_WORD = 1,
	SCRIPT_VALUE_TYPE_STRING,
	SCRIPT_VALUE_TYPE_MULTI_WORD,
	SCRIPT_VALUE_TYPE_GPIO,
	SCRIPT_VALUE_TYPE_NULL,
};
#endif
