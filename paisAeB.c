#include <stdio.h>
/*
Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e
um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva
um programa, que imprima o tempo necessário para que a população do país A
ultrapasse a população do país B.
*/
int main(){

    float paisA = 5000000;
    float taxaNatalidadeA = 0;
    float paisAtualizadoA = 0;

    float paisB = 7000000;
    float paisAtualizadoB = 0;
    float taxaNatalidadeB = 0;

    int i;

    for (i = 0; paisA < paisB; i++)
    {

        taxaNatalidadeA = (paisA * 3) / 100;
        printf("A taxa de natalidade por ano do pais A e:%.2f\n", taxaNatalidadeA);

        taxaNatalidadeB = (paisB * 2) / 100;
        printf("A taxa de natalidade por ano do pais B e:%.2f\n", taxaNatalidadeB);

        paisAtualizadoA = taxaNatalidadeA + paisA;
        printf("pais A ano %.2f, %d\n", paisAtualizadoA, i + 1);
        paisAtualizadoB = taxaNatalidadeB + paisB;
        printf("pais B ano %.2f, %d\n", paisAtualizadoB, i + 1);

        paisA = paisAtualizadoA;
        printf("%.2f\n", paisA);
        paisB = paisAtualizadoB;
        printf("%.2f\n", paisA);
    }

    printf("pais A atualizado %.2f\n", paisA);
    printf("pais B atualizado %.2f\n", paisB);

    printf("Vai demorar %d anos para o pais A chegar no pais B, em numeros de habitantes", i);

    return 0;
}