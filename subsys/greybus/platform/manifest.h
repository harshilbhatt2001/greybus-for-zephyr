/*
 * Copyright (c) 2020 Friedt Professional Engineering Services, Inc
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SUBSYS_GREYBUS_PLATFORM_MANIFEST_H_
#define SUBSYS_GREYBUS_PLATFORM_MANIFEST_H_

#include <stddef.h>
#include <stdint.h>

int manifest_get(uint8_t **mnfb, size_t *mnfb_size);
int manifest_get_fragment(uint8_t **mnfb, size_t *mnfb_size, uint8_t id);
int manifest_get_cports(uint8_t *mnfb, size_t size);

#endif /* SUBSYS_GREYBUS_PLATFORM_MANIFEST_H_ */
