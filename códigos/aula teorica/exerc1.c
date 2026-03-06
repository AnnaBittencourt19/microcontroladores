#include <stdio.h>
#include <stdint.h>

#define LIGADO 1
#define DESLIGADO 0
#define LED1 0
#define LED2 1

uint8_t led_states = 0;

static inline void ligar_led(uint8_t led) {
    led_states |= (1 << led);
}

static inline void desligar_led(uint8_t led) {
    led_states &= ~(1 << led);
}

int main() {
    uint8_t estado;
    
    printf("Digite o estado dos botões (0-3): ");
    scanf("%hhu", &estado);
    
    if (estado > 3) {
        printf("Estado inválido!\n");
        return 1;
    }
    
    (estado & 1) ? ligar_led(LED1) : desligar_led(LED1);
    (estado & 2) ? ligar_led(LED2) : desligar_led(LED2);
    
    printf("\n=== Estado dos LEDs ===\n");
    printf("LED1: %s\n", (led_states & (1 << LED1)) ? "ON" : "OFF");
    printf("LED2: %s\n", (led_states & (1 << LED2)) ? "ON" : "OFF");
    
    return 0;
}
