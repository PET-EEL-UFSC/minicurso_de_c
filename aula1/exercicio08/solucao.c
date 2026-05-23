#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9.0f / 5.0f + 32.0f;

    printf("Temperatura em Celsius: %.1f C\n", celsius);
    printf("Temperatura em Fahrenheit: %.1f F\n", fahrenheit);

    return 0;
}
