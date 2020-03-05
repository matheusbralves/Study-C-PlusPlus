//Programa área do Triângulo

/* Construa um programa que leia a
   base e altura do triângulo e calcule
   a sua área*/

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
	do{ //faça enquanto
	printf("\nDigite o valor da base: "); // \n é para pular linha (new line)
	scanf("%f",&base);
	printf("\nDigite o valor da altura: ");
	scanf("%f",&altura);
	area=(base*altura)/2;
	printf("\narea=%f \n",area);
	printf("\n\nDeseja novos valores? <s> ou <n>: ");
	op=getche();op=toupper(op);}while(op!='N');//se for s repita senao finalize
	system ("pause");
}
