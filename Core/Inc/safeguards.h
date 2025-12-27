#pragma once
#include "configuration.h"


#if defined(ENABLE_SD) && defined(ENABLE_USB_CDC)
  #error "Both SD card and USB CDC are enabled! Only one can be active at a time."
#endif

#if defined(ENABLE_SD)
 #warning "SD card functionality enabled, USB CDC disabled."
#else
 #warning "USB CDC functionality enabled, SD card disabled."
#endif

#if !defined(APP_RX_DATA_SIZE)
  #error "APP_RX_DATA_SIZE is not defined."
#endif
#if (APP_RX_DATA_SIZE >2048 || APP_TX_DATA_SIZE > 2048)
  #error "APP_RX_DATA_SIZE OR APP_TX_DATA_SIZE exceeds maximum allowed size of 2048 bytes."
#endif
#if (APP_RX_DATA_SIZE < 64|| APP_TX_DATA_SIZE < 64)
  #error "APP_RX_DATA_SIZE OR APP_TX_DATA_SIZE is below minimum required size of 64 bytes."
#endif