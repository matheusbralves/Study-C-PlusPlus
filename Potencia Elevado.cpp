//Programa Potencia/elevado

//Chamar bibliotecas

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

//Declarar variaveis

float n1,n2,result;

main (){
	system("cls");
	printf("Entre com o numero A: ");
	scanf("%f",&n1);
	printf("\nEntre com o numero B: ");
	scanf("%f",&n2);
	result=pow(n1,n2);
	printf("\nA elevado a B = %2.2f\n",result);
	system("pause");
}
