#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 10

struct Livro {
    char titulo[50];
    char autor[50];
    int ano;
};

int main() {
    struct Livro livros[MAX_LIVROS];
    int quantidade = 0;
    int opcao;

    do {
        printf("\n=== BIBLIOTECA ===\n");
        printf("1 - Cadastrar livro\n");
        printf("2 - Listar livros\n");
        printf("3 - Buscar livro\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {

            case 1:
                if (quantidade < MAX_LIVROS) {
                    printf("\nTitulo: ");
                    fgets(livros[quantidade].titulo, 50, stdin);
                    livros[quantidade].titulo[strcspn(livros[quantidade].titulo, "\n")] = '\0';

                    printf("Autor: ");
                    fgets(livros[quantidade].autor, 50, stdin);
                    livros[quantidade].autor[strcspn(livros[quantidade].autor, "\n")] = '\0';

                    printf("Ano: ");
                    scanf("%d", &livros[quantidade].ano);

                    quantidade++;

                    printf("Livro cadastrado com sucesso!\n");
                } else {
                    printf("A biblioteca esta cheia!\n");
                }
                break;

            case 2:
                printf("\n=== LIVROS CADASTRADOS ===\n");

                if (quantidade == 0) {
                    printf("Nenhum livro cadastrado.\n");
                } else {
                    for (int i = 0; i < quantidade; i++) {
                        printf("\nLivro %d\n", i + 1);
                        printf("Titulo: %s\n", livros[i].titulo);
                        printf("Autor: %s\n", livros[i].autor);
                        printf("Ano: %d\n", livros[i].ano);
                    }
                }
                break;

            case 3: {
                char busca[50];
                int encontrado = 0;

                printf("\nDigite o titulo do livro: ");
                fgets(busca, 50, stdin);
                busca[strcspn(busca, "\n")] = '\0';

                for (int i = 0; i < quantidade; i++) {
                    if (strcmp(livros[i].titulo, busca) == 0) {
                        printf("\nLivro encontrado!\n");
                        printf("Titulo: %s\n", livros[i].titulo);
                        printf("Autor: %s\n", livros[i].autor);
                        printf("Ano: %d\n", livros[i].ano);

                        encontrado = 1;
                    }
                }

                if (!encontrado) {
                    printf("Livro nao encontrado.\n");
                }

                break;
            }

            case 4:
                printf("Encerrando o sistema...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    return 0;
}
