#include <stdio.h>

int main(void) {
    const float PI = 3.14159f;
    float raio, area, perimetro;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    perimetro = 2.0f * PI * raio;

    printf("\n=== Resultados ===\n");
    printf("Area do circulo: %.2f\n", area);
    printf("Perimetro do circulo: %.2f\n", perimetro);

    return 0;
}
