/***************************************************************************
 *            tunsrvthread.h
 *
 *  Tue Feb 12 09:51:18 2008
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

#ifndef _TUNDEVTHREAD_H
#define _TUNDEVTHREAD_H

#include <pthread.h>
#include "config.h"

struct tunsrvthread_t
{
  pthread_t thread;
  pthread_mutex_t thread_mutex;
  pthread_cond_t cond;
  pthread_mutex_t cond_mutex;
  char buffer[TUNBUFFERSIZE];
  int buffer_len;
};

void tunsrvthread (struct tunsrvthread_t *me);
int tunsrvthread_create (struct tunsrvthread_t *new);
#endif /* _TUNDEVTHREAD_H */