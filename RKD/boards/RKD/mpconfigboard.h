// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "RKD"
#define MICROPY_HW_FLASH_STORAGE_BYTES          (3 * 1024 * 1024)

#define MICROPY_HW_USB_VID (0x0)
#define MICROPY_HW_USB_PID (0x4a0)

// Enable USB Mass Storage with FatFS filesystem.
#define MICROPY_HW_USB_MSC  (1)
#define MICROPY_HW_USB_MSC_INQUIRY_VENDOR_STRING "PTALTS-LK"
#define MICROPY_HW_USB_MSC_INQUIRY_PRODUCT_STRING "RKD-MPY"
#define MICROPY_HW_USB_MSC_INQUIRY_REVISION_STRING "1.0"
