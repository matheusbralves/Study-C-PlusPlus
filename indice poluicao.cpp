//Programa Indice de poluicao

//Chamar bibliotecas

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctype.h>

//Declarar variaveis

char op;
float indicepol;

main (){
	system("cls");
	do{
		do{
		printf("Entre com o indice de poluicao medido (entre 0.05 ate 0.25): ");
		scanf("%f",&indicepol);
	}while(indicepol>0.05 || indicepol<0.25);
	
	if(indicepol>0.3){
		printf("Industrias do 1o grupo devem suspender atividades");
	}
	
	else if(indicepol>0.4){
		printf("Industrias do 1o e 2o grupo devem suspender atividades");
	}
	
	else{
		printf("Todas industrias devem suspender atividades");
	}
	
	printf("\n\nDeseja um novo indice? <s> ou <n>: \n");
	op=getche();op=toupper(op);}while(op!='N');
	system("pause");
}
