//Programa contador de interacoes 

//Bibliotecas

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>

//Variaveis

main (){
	int numero,cont;
	cont=0;
	printf("Insira um numero inteiro: ");
	scanf("%i",&numero);
	while(numero>1){
		if (numero%2==0)
		{numero=numero/2;}
		else {numero=3*numero+1;}	
	    cont=cont+1;
		printf("\nIteracoes > %i",numero);}
		printf("\nNumero de iteracoes = %i",cont);
}
