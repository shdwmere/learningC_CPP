#include <stdio.h>
#include <math.h>

int main() {

    printf("\n");
    printf("=-=-=-= Operadores Matematicos =-=-=-=\n");
    printf("\n");
    
    int a = 10, b = 5;

    // Adicao
    int addition = a + b;
    printf("Adicao: %d + %d = %d\n", a, b, addition);

    // Subtração
    int subtraction = a - b;
    printf("Subtracao: %d - %d = %d\n", a, b, subtraction);

    // Multiplicação
    int multiplication = a * b;
    printf("Multiplicacao: %d * %d = %d\n", a, b, multiplication);

    // Divisão
    int division = a / b;
    printf("Divisao: %d / %d = %d\n", a, b, division);

    // Resto da divisão (Módulo)
    int modulo = a % b;
    printf("Resto da divisao (Modulo): %d %% %d = %d\n", a, b, modulo);

    // Potência
    double base = 2.0, exponent = 3.0;
    double power = pow(base, exponent);
    printf("Potencia: %.2lf ^ %.2lf = %.2lf\n", base, exponent, power);

    printf("\n");

    return 0;
}