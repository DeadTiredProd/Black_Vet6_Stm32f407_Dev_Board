#pragma once

// configuration.h
// Configuration options for Black STM32F407VET6 Dev Board firmware

//Device author information
#define DEVICE_AUTHOR "DEADTIREDPROD"
#define FIRMWARE_VERSION "V1.2.0"
#define DEVICE_NAME "Black STM32F407VET6 Dev Board"



//------------------------ USB CDC/SD OPTIONS -----------------------//

//USB CDC is enabled by default

//Uncomment the line below to enable LED1 indicator for USB CDC activity
#define ENABLE_USB_CDC_LED_INDICATOR

//Choose to enable either SD card functionality or USB CDC (serial over USB) functionality
//Uncomment the line below to enable SD card functionality NOTE USBCDC WILL NOT WORK IF SD IS ENABLED (hoping to fix this later)
//#define ENABLE_SD


//Define buffer sizes for USB CDC functionality (in bytes)
#define APP_RX_DATA_SIZE  256
#define APP_TX_DATA_SIZE  256
//------------------------ END OF USB CDC/SD OPTIONS -----------------------//

