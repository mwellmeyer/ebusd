/*
 * ebusd - daemon for communication with eBUS heating systems.
 * Copyright (C) 2015-2022 John Baier <ebusd@ebusd.eu>
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

#ifndef LIB_UTILS_CLOCK_H_
#define LIB_UTILS_CLOCK_H_

#include <stdint.h>
#include <time.h>

namespace ebusd {

/** \file lib/utils/clock.h */

/**
 * Get the real time system clock.
 * @param t the @a timespec in which to store the time.
 */
void clockGettime(struct timespec* t);

/**
 * Get the current system time in milliseconds since the Epoch.
 */
uint64_t clockGetMillis();

}  // namespace ebusd

#endif  // LIB_UTILS_CLOCK_H_
