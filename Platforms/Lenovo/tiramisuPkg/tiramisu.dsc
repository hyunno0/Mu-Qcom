## @file
#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                  = tiramisu
  PLATFORM_GUID                  = 7b30b6df-c011-47fd-81a8-f96b10b433c6
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/tiramisuPkg-$(ARCH)
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = DEBUG|RELEASE
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = tiramisuPkg/tiramisu.fdf
  DISPLAY_USES_RGBA              = 0
  USE_DISPLAYDXE                 = 0
  AB_SLOT_SUPPORT                = 1
  USE_UART                       = 0

  # 0 = SM8250
  # 1 = SM8250-AB
  # 2 = SM8250-AC
  SOC_TYPE                       = 2

[BuildOptions.common]
  *_*_*_CC_FLAGS = -DSOC_TYPE=$(SOC_TYPE) -DAB_SLOT_SUPPORT=$(AB_SLOT_SUPPORT) -DDISPLAY_USES_RGBA=$(DISPLAY_USES_RGBA)

[LibraryClasses.common]
  PlatformMemoryMapLib|tiramisuPkg/Library/PlatformMemoryMapLib/PlatformMemoryMapLib.inf
  DeviceConfigurationMapLib|tiramisuPkg/Library/DeviceConfigurationMapLib/DeviceConfigurationMapLib.inf

[PcdsFixedAtBuild.common]
  # Platform-specific
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000         # Starting address
  gArmTokenSpaceGuid.PcdSystemMemorySize|0x200000000        # 8GB Size

  gEfiMdeModulePkgTokenSpaceGuid.PcdFirmwareVendor|L"CloudSweets"   # Device Maintainer

  gArmTokenSpaceGuid.PcdCpuVectorBaseAddress|0x9FF8C000

  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x9FF90000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00040000      # 256K stack

  # SmBios
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemVendor|"Lenovo"
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemModel|"Xiaoxin Pad Pro 12.7"
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"tiramisu"
  gQcomPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"Xiaoxin_Pad_Pro_12.7_tiramisu"
  gQcomPkgTokenSpaceGuid.PcdSmbiosBoardModel|"Xiaoxin Pad Pro 12.7"

  # Simple FrameBuffer
  gQcomPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|2944
  gQcomPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|1840
  gQcomPkgTokenSpaceGuid.PcdMipiFrameBufferPixelBpp|32

[PcdsDynamicDefault.common]
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|2944
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|1840
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|2944
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|1840
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|368
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|94
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|368
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|94

!include SM8250Pkg/SM8250Pkg.dsc.inc
