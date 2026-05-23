#include <stdio.h>

int main(void) {
    short int maximo_short = 32767;
    unsigned int maximo_uint = 4294967295U;
    long int maximo_long = 9223372036854775807L;
    float maximo_float = 3.402823e+38f;
    char exemplo_char = 'z';

    printf("=== Limites dos Tipos em C ===\n");
    printf("short int maximo:    %d\n", maximo_short);
    printf("unsigned int maximo: %u\n", maximo_uint);
    printf("long int maximo:     %ld\n", maximo_long);
    printf("float maximo:        %f\n", maximo_float);
    printf("char exemplo:        %c\n", exemplo_char);

    return 0;
}
