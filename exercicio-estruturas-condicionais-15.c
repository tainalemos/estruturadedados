/*15.	(Cortesia do Prof. Bogdan Tomoyuki Nassu) A tabela abaixo foi copiada do website da Receita Federal, e traz as alíquotas do imposto de renda de pessoa física retido na fonte para o exercício de 2013:

Base de cálculo mensal em R$	Alíquota %	Parcela a deduzir do imposto em R$
Até 1.637,11	-	-
De 1.637,12 até 2.453,50	       7,5	      122,78
De 2.453,51 até 3.271,38	       15,0	      306,80
De 3.271,39 até 4.087,65	       22,5    	  552,15
Acima de 4.087,65	               27,5	      756,53

A base de cálculo é dada pelo salário mensal, com certas deduções, como dependentes e contribuição previdenciária. Abstraindo estes e outros detalhes, o imposto devido é calculado tomando a base de cálculo mensal, verificando a faixa na qual ela se encontra, aplicando a alíquota correspondente, e reduzindo o valor final da parcela a deduzir. Por exemplo, se a base de cálculo é de R$10.000,00, a alíquota é de 27,5%, ou seja, R$2750,00. Deduzimos R$756,53 da parcela e obtemos como resultado final R$1993,47 de imposto devido.
Escreva um programa que receba como entrada a base de cálculo mensal de um trabalhador e retorne o imposto de renda devido.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float baseCalculo, aliquota, impostoDevido;

    printf("Escreva a base de cálculo mensal: ");
    scanf("%f",&baseCalculo);

    if(baseCalculo<=1637.11){
        printf("\nIsento de pagar imposto");
    }else if(baseCalculo>=1637.12&&baseCalculo<=2453.50){
        aliquota=0.075;
        impostoDevido=(baseCalculo*aliquota)-122.78;
        printf("Total de imposto a pagar: %.2f reais",impostoDevido);
    }else if (baseCalculo>=2453.51&&baseCalculo<=3271.38){
        aliquota=0.15;
        impostoDevido=(baseCalculo*aliquota)-306.80;
        printf("Total de imposto a pagar: %.2f reais",impostoDevido);
    }else if(baseCalculo>=3271.39&&baseCalculo<=4087.65){
        aliquota=0.225;
        impostoDevido=(baseCalculo*aliquota)-552.15;
        printf("Total de imposto a pagar: %.2f reais",impostoDevido);
    }else{
        aliquota=0.275;
        impostoDevido=(baseCalculo*aliquota)-756.53;
        printf("Total de imposto a pagar: %.2f reais",impostoDevido);
    }

    return 0;
}
