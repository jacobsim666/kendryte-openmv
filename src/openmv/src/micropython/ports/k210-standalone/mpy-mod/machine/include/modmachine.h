#ifndef MICROPY_INCLUDED_K210_MODMACHINE_H
#define MICROPY_INCLUDED_K210_MODMACHINE_H

#include "py/obj.h"

extern const mp_obj_type_t machine_uarths_type;
extern const mp_obj_type_t machine_uart_type;
extern const mp_obj_type_t machine_pin_type;
extern const mp_obj_type_t machine_pwm_type;
extern const mp_obj_type_t machine_timer_type;
extern const mp_obj_type_t machine_nt35310_type;
extern const mp_obj_type_t machine_ov5640_type;
extern const mp_obj_type_t machine_burner_type;
extern const mp_obj_type_t machine_demo_face_detect_type;
extern const mp_obj_type_t machine_zmodem_type;
extern const mp_obj_type_t machine_spiflash_type;
extern const mp_obj_type_t machine_fpioa_type;
extern const mp_obj_type_t machine_ws2812_type;
extern const mp_obj_type_t machine_led_type;

void machine_pins_init(void);
void machine_pins_deinit(void);

#endif // MICROPY_INCLUDED_K210_MODMACHINE_H
