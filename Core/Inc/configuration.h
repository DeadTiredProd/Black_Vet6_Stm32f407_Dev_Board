
// configuration.h
// Configuration options for Black STM32F407VET6 Dev Board firmware

//Device author information
#define DEVICE_AUTHOR "DEADTIREDPROD"

#define DEVICE_NAME "Black STM32F407VET6 Dev Board"

//------------------------ FUNCTIONALITY OPTIONS -----------------------//
//Choose to enable either SD card functionality or USB CDC (serial over USB) functionality
//Uncomment the line below to enable SD card functionality NOTE USBCDC WILL NOT WORK IF SD IS ENABLED (hoping to fix this later)

//USB CDC is enabled by default

//#define ENABLE_SD

//------------------------ END OF USB CDC/SD OPTIONS -----------------------//

//Define buffer sizes for USB CDC functionality (in bytes)
#define APP_RX_DATA_SIZE  256
#define APP_TX_DATA_SIZE  256