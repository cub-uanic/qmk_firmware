
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t led_delay_ms = 80;

    /* LED pins setup */
    gpio_set_pin_output(LED_CAPS_LOCK_PIN);
    wait_ms(led_delay_ms);
    gpio_write_pin_high(LED_CAPS_LOCK_PIN);
    wait_ms(led_delay_ms);

    gpio_set_pin_output(LED_NUM_LOCK_PIN);   
    wait_ms(led_delay_ms);
    gpio_write_pin_high(LED_NUM_LOCK_PIN);
    wait_ms(led_delay_ms);

    gpio_set_pin_output(LED_SCROLL_LOCK_PIN);   
    wait_ms(led_delay_ms);
    gpio_write_pin_high(LED_SCROLL_LOCK_PIN);
    wait_ms(led_delay_ms);

    gpio_set_pin_output(LED_COMPOSE_PIN);   
    wait_ms(led_delay_ms);
    gpio_write_pin_high(LED_COMPOSE_PIN);
    wait_ms(led_delay_ms);

    return true;
};

