/***************************************************************************
 *            udpsrvsession.h
 *
 *  Tue Feb  6 12:06:52 2008
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

#ifndef _UDPSRVSESSION_H
#define _UDPSRVSESSION_H

#include "peer.h"

struct udpsrvsession_t
{
  int timeout;
  int fd;
  char *s_addr;
  int s_port;
  struct peer_t *peer;
};

struct udpsrvsession_t *udpsrvsession_search (char *s_addr, int s_port);
struct udpsrvsession_t *udpsrvsession_create (char *s_addr, int s_port);
void udpsrvsession_update_timeout (struct udpsrvsession_t *cursession);
#endif /* _UDPSRVSESSION_H */