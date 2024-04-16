#include <stdio.h>

int main()
{
    float valor_gasto;
    float valor_gorjeta;

        printf("\ndigite o valor que foi gasto no restaurante: ");
        scanf("%f", &valor_gasto);
        

    valor_gorjeta = 0.1 * valor_gasto;
    valor_gasto = valor_gasto + valor_gorjeta;

        printf("\no valor da gorjeta e: R$%.2f", valor_gorjeta);
        printf("\no valor a ser pago e: R$%.2f\n", valor_gasto);

    return 0;
}