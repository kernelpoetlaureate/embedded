#ifndef UPDATE_H
#define UPDATE_H

int update_available(void);
int perform_update(void);
void rollback_firmware(void);
void bootloader_init(void);
void system_reboot(void);
void jump_to_application(void);

#endif // UPDATE_H
