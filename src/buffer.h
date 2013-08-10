/*
 * Copyright (C) 2013  Travis Brown (travisb@travisbrown.ca)
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
/*
 * Header for buffers, which represent a psuedo-terminal which can be
 * multiplexed.
 */
#ifndef BUFFER_H
#define BUFFER_H

#include "loop.h"

#define BUFFER_SIZE 1024
struct buffer {
	struct loop_fd in;
	struct loop_fd out;

	int buf_in_used;
	char buf_in[BUFFER_SIZE];

	int buf_out_used;
	char buf_out[BUFFER_SIZE];
}

#endif
