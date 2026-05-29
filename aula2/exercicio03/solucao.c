#include <stdio.h>

int main() {
    float temperatura;
    printf("Digite a temperatura do reator: ");
    scanf("%f", &temperatura);

    if (temperatura > 0) {
        printf("POSITIVO - Reator aquecendo\n");
    } else if (temperatura < 0) {
        printf("NEGATIVO - Reator resfriando\n");
    } else {
        printf("ZERO - Reator em equilibrio termico\n");
    }
  return 0;
}
