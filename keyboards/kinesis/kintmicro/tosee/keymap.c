

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    gpio_write_pin(LED_CAPS_LOCK_PIN, true);
    gpio_write_pin(LED_NUM_LOCK_PIN, false);
    gpio_write_pin(LED_SCROLL_LOCK_PIN, true);
    gpio_write_pin(LED_COMPOSE_PIN, false);

    return true;
}


bool led_update_user(led_t led_state) {

    gpio_write_pin(LED_CAPS_LOCK_PIN, true);
    gpio_write_pin(LED_NUM_LOCK_PIN, false);
    gpio_write_pin(LED_SCROLL_LOCK_PIN, true);
    gpio_write_pin(LED_COMPOSE_PIN, false);

    return false;
}

