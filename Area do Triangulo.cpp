//Programa �rea do Tri�ngulo

/* Construa um programa que leia a
   base e altura do tri�ngulo e calcule
   a sua �rea*/

//Chamar bibliotecas (essas 3 sao padroes)

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctype.h>

//Declarar variaveis

float base,altura,area;

main(){	//escopo de programa (inicio)
	system("cls");  //clear screen = limpar tela
	do{ //fa�a enquanto
	printf("\nDigite o valor da base: "); // \n � para pular linha (new line)
	scanf("%f",&base);
	printf("\nDigite o valor da altura: ");
	scanf("%f",&altura);
	area=(base*altura)/2;
	printf("\narea=%f \n",area);
	printf("\n\nDeseja novos valores? <s> ou <n>: ");
	op=getche();op=toupper(op);}while(op!='N');//se for s repita senao finalize
	system ("pause");
}
