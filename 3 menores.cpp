//Programa 3 menores

//Chamar bibliotecas

#include <conio.h>
#include <stdio.h>
#include <iostream>

//Declarar variaveis

int n1,n2,n3;

main (){
	system("cls");
	printf("Entre com o primeiro numero: ");
	scanf("%i",&n1);
	printf("\nEntre com o segundo numero: ");
	scanf("%i",&n2);
	printf("\nEntre com o terceiro numero: ");
	scanf("%i",&n3);
		if (n1<n2 and n2<n3){
		printf("\nO primeiro numero e o menor = %i\n",n1);
				  			}
	else{
		if (n2<n3 and n3<n1){
			printf("\nO segundo numero e o menor = %i\n",n2);
	   						}
	else{
		if (n3<n2 and n2<n1){
			printf("\nO terceiro numero e o menor = %i\n",n3);
		                    }
	    }
	    }
	system("pause");
}
