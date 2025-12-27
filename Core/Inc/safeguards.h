#include "configuration.h"


#if defined(ENABLE_SD) && defined(ENABLE_USB_CDC)
  #error "Both SD card and USB CDC are enabled! Only one can be active at a time."
#endif

#if defined(ENABLE_SD)
 #warning "SD card functionality enabled, USB CDC disabled."
#else
 #warning "USB CDC functionality enabled, SD card disabled."
#endif

