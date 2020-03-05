//Programa banco exe 5

//Chamar bibliotecas

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctype.h>

//Declarar variaveis

char op;
float saldo,credito;

main (){
	system("cls");
	do{
		
	printf("Entre com o saldo medio do cliente: ");
	scanf("%f",&saldo);
	fflush(stdin);
	
	if(saldo>=0 && saldo<=200){
		printf("Nenhum credito ;-;");
	}
	
	else if(saldo>=201 && saldo<=400){
		credito=saldo+(saldo*0.20);
		printf("Saldo medio = %.2f\nValor credito = %.2f",saldo,credito);
	}
	
	else if(saldo>=401 && saldo<=600){
		credito=saldo+(saldo*0.30);
		printf("Saldo medio = %.2f\nValor credito = %.2f",saldo,credito);
	}
	
	else{
		credito=saldo+(saldo*0.40);
		printf("Saldo medio = %.2f\nValor credito = %.2f",saldo,credito);
	}
	printf("\n\nDeseja? <s> ou <n>: \n");
	op=getche();op=toupper(op);}while(op!='N');
	system("pause");
}
