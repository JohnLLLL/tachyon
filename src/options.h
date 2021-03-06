/*
 * Copyright (C) 2013-2014  Travis Brown (travisb@travisbrown.ca)
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
 * Structure used to store the commandline options
 */
#ifndef OPTIONS_H
#define OPTIONS_H

extern struct cmd_options {
	int predict; /* Should character prediction be performed ? */
	int verbose; /* Logging verbosity level */
	char new_buf_command[1024]; /* Command to run when opening a new buffer */
	char session_name[128]; /* Name of this session to differentiate it from other sessions */
	struct {
		char meta; /* The key combination which accesses the meta terminal functionality */
		char buffer_create; /* The key command which creates a new buffer */
		char buffer_next; /* Change the current window to the next buffer */
		char buffer_prev; /* Change the current window to the previous buffer */
		char buffer_last; /* Change to the previous buffer */
		char buffer_0; /* Change to buffer 0 */
		char buffer_1; /* Change to buffer 1 */
		char buffer_2; /* Change to buffer 2 */
		char buffer_3; /* Change to buffer 3 */
		char buffer_4; /* Change to buffer 4 */
		char buffer_5; /* Change to buffer 5 */
		char buffer_6; /* Change to buffer 6 */
		char buffer_7; /* Change to buffer 7 */
		char buffer_8; /* Change to buffer 8 */
		char buffer_9; /* Change to buffer 9 */
	} keys;
} cmd_options;

#endif
