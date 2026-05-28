int main() {
    float nota1, nota2, nota3, media;
  
    printf("Digite a nota da 1a prova: ");
    scanf("%f", &nota1);
    printf("Digite a nota da 2a prova: ");
    scanf("%f", &nota2);
    printf("Digite a nota da 3a prova: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0f;
    printf("Media: %.2f\n", media);

    if (media >= 7.0f) {
        printf("Situacao: APROVADO\n");
    } else if (media >= 5.0f) {
        printf("Situacao: RECUPERACAO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }
  return 0;
}
