/***************************************************************************
 *            config.h
 *
 *  Thu Feb 14 18:30:32 2008
 *  Copyright  2008  Pau Rodriguez-Estivill
 *  <prodrigestivill@gmail.com>
 ****************************************************************************/

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor Boston, MA 02110-1301,  USA
 */

#ifndef _CONFIG_H
#define _CONFIG_H

#include "../config.h"

#define DEBUG 1

//TUNDEV
#define TUNDEVICE "/dev/net/tun"
#define TUNBUFFERSIZE 65535
char *tunname;
int num_tundevthreads;
int tunmtu;

//UDPSRV
#define UDPBUFFERSIZE 65535
int num_udpsrvthreads;
int port_udp;

#endif /* _CONFIG_H */
