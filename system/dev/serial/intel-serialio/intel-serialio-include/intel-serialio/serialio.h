// Copyright 2016 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include <ddk/device.h>
#include <ddk/driver.h>

#include <zircon/types.h>

#define INTEL_VID (0x8086)
#define INTEL_WILDCAT_POINT_SERIALIO_DMA_DID (0x9ce0)
#define INTEL_WILDCAT_POINT_SERIALIO_I2C0_DID (0x9ce1)
#define INTEL_WILDCAT_POINT_SERIALIO_I2C1_DID (0x9ce2)
#define INTEL_WILDCAT_POINT_SERIALIO_SDIO_DID (0x9cb5)
#define INTEL_WILDCAT_POINT_SERIALIO_SPI0_DID (0x9ce5)
#define INTEL_WILDCAT_POINT_SERIALIO_SPI1_DID (0x9ce6)
#define INTEL_WILDCAT_POINT_SERIALIO_UART0_DID (0x9ce3)
#define INTEL_WILDCAT_POINT_SERIALIO_UART1_DID (0x9ce4)

#define INTEL_SUNRISE_POINT_SERIALIO_I2C0_DID (0x9d60)
#define INTEL_SUNRISE_POINT_SERIALIO_I2C1_DID (0x9d61)
#define INTEL_SUNRISE_POINT_SERIALIO_I2C2_DID (0x9d62)
#define INTEL_SUNRISE_POINT_SERIALIO_I2C3_DID (0x9d63)

zx_status_t intel_serialio_bind_dma(zx_device_t* dev);
zx_status_t intel_serialio_bind_i2c(zx_device_t* dev);
zx_status_t intel_serialio_bind_sdio(zx_device_t* dev);
zx_status_t intel_serialio_bind_spi(zx_device_t* dev);
zx_status_t intel_serialio_bind_uart(zx_device_t* dev);
