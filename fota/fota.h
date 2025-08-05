#ifndef FOTA_H
#define FOTA_H

#include <stdint.h>

int fota_download_firmware(const char* url, uint8_t* buffer, uint32_t max_size);
int fota_verify_firmware(const uint8_t* buffer, uint32_t size);
int fota_apply_update(const uint8_t* buffer, uint32_t size);

#endif // FOTA_H
