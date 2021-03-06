/***************************************************************************
 *            peer.h
 *
 *  VPMN  -  Virtual Private Mesh Network
 *  Copyright  2008  Pau Rodriguez-Estivill
 *  <prodrigestivill@gmail.com>
 ****************************************************************************/

/*
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

#ifndef _PEER_H
#define _PEER_H

#include <pthread.h>
#include <netinet/in.h>
#include "timeout.h"
#include "router.h"
#include "udpsrvsession.h"

#define PEER_STAT_NULL 0x00
#define PEER_STAT_NEW  0x01
#define PEER_STAT_ID   0x02     //IDENTIFIED
#define PEER_STAT_IDK  0x04     //ID ACK
#define PEER_STAT_TO   0x80     //TIMEOUT

struct peer_s
{
  struct udpsrvsession_s *udpsrvsession;
  struct in_network *shared_networks;
  unsigned int shared_networks_len;
  struct sockaddr_in *addrs;
  unsigned int addrs_len;
  timeout_t timeout;
  int stat;
  pthread_mutex_t modify_mutex;
};

int peer_addnew(struct peer_s *peer);
int peer_add(struct peer_s *peer, struct udpsrvsession_s *session);
struct peer_s *peer_create();
void peer_destroy(struct peer_s *oldpeer);

#endif                          /* _PEER_H */
