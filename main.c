#include <stdio.h>
#include <stdlib.h>

int main() {
    int op, resultado, A, B;
    printf("Escolha qual operacao deseja fazer:\n");
    printf("1=Soma\n2=Subtracao\n3=Divisao\n4=Multiplicacao\n");
    scanf("%d", &op);

    switch(op) {
        case 1:
            printf("Digite os dois valores da operacao:\n");
            scanf("%d %d", &A, &B);
            resultado = A + B;
            printf("O resultado eh:\n %d", resultado);
            break;

        case 2:
            printf("Digite os dois valores da operacao:\n");
            scanf("%d %d", &A, &B);
            resultado = A - B;
            printf("O resultado eh:\n %d", resultado);
            break;

        case 3:
            printf("Digite os dois valores da operacao:\n");
            scanf("%d %d", &A, &B);
            resultado = A / B;
            printf("O resultado eh:\n %d", resultado);
            break;

        case 4:
            printf("Digite os dois valores da operacao:\n");
            scanf("%d %d", &A, &B);
            resultado = A * B;
            printf("O resultado eh:\n %d", resultado);
            break;

        default:
            printf("Codigo invalido");
            break;
    }

    return 0;
}

