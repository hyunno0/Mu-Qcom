APRIORI DXE {

  # First, install the PCD driver and call DxeInit
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/Tiramisu/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

  # Next, install cpu protocol and enable the interrupt controller
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

  # Core Drivers
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

  INF Binaries/Tiramisu/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

  INF Binaries/Tiramisu/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

  INF Binaries/Tiramisu/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/UFSDxe/UFSDxe.inf

  INF FatPkg/EnhancedFatDxe/Fat.inf

  INF Binaries/Tiramisu/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

  #Binaries/Tiramisu/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf

  INF Binaries/Tiramisu/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

!if $(USE_DISPLAYDXE) == 1
  INF Binaries/Tiramisu/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/Tiramisu/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
!if $(USE_DISPLAYDXE) == 1
  INF Binaries/Tiramisu/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  
  INF Binaries/Tiramisu/QcomPkg/Drivers/FontDxe/FontDxe.inf
  
  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf  
  
  INF Binaries/Tiramisu/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/XhciDxe/XhciDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/UsbKbDxe/UsbKbDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/UsbMassStorageDxe/UsbMassStorageDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/MacDxe/MacDxe.inf
  INF Binaries/Tiramisu/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
}
