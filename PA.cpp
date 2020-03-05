//Programa PA

//Chamar bibliotecas

#include <conio.h>
#include <stdio.h>
#include <iostream>

//Declarar variaveis

int An,A1,n,r,Sn,PAimp;

main (){
	system("cls");
	printf("Entre com o primeiro termo da PA: ");
	scanf("%i",&A1);
	printf("\nEntre com o numero de termos da PA: ");
	scanf("%i",&n);
	printf("\nEntre com a razao da PA: ");
	scanf("%i",&r);
	An=A1+(n-1)*r;
	//printf ("\nUltimo termo = %i\n",An);
	Sn=(A1+An)*n/2;
	printf("\nSoma dos termos = %i\n",Sn);
	printf ("\nTermo > %i\n",A1);
	while(A1<An){// Para razao positiva
			A1=A1+r;
			printf ("\nTermo > %i\n",A1);
			}
	while(A1>An){
			A1=A1+r;// Para razao negativa
			printf ("\nTermo > %i\n",A1);
			}
	system("pause");
}
