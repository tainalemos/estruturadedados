/*16. Faça um programa que receba do usuário o número de lados e o tamanho dos lados de um
polígono regular e imprima o valor da área do polígono. O programa deve utilizar uma
estrutura switch-case para decidir que fórmula de cálculo utilizar, de acordo com o número
de lados do polígono. Se o número de lados for diferente de 3, 4 ou 6, o programa deve
informar: “não sei calcular a área”. Áreas:
a. Triângulo: A = L*L*1.73/4
b. Quadrado: A = L*L
c. Hexágono: A = 6*L*L*1.73/4;*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float A, L;
    char opcao; 

    printf("escreva o número de lados do seu polígno regular: ");
    scanf("%c",&opcao);
    switch(opcao)
    {
    case'3':
        printf("insira o valor do lado");
        scanf("%f",&L);
        A=L*L*1.73/4;
        printf("a aréa é:%.2f",A);
        break; 
    case'4':
        printf("insira o valor do lado");
        scanf("%f",&L);
        A=L*L;
        printf("a aréa é:%.2f",A);
        break;
    case'6':
        printf("insira o valor do lado");
        scanf("%f",&L);
        A=6*L*L*1.73/4;
        printf("a aréa é:%.2f",A);
        break;
    default:
        printf("não sei calcular a área");
            break;
    }


    return 0;
}
