//Programa

//Chamar bibliotecas

#include <conio.h>
#include <stdio.h>
#include <iostream>

//Declarar variaveis

int temp1,temp2,temp3,temp4,temp5;
float media;

main (){
	system("cls");
	printf("Entre com a primeira temperatura: ");
	scanf("%i",&temp1);
	printf("\nEntre com a segunda temperatura: ");
	scanf("%i",&temp2);
	printf("\nEntre com a terceira temperatura: ");
	scanf("%i",&temp3);
	printf("\nEntre com a quarta temperatura: ");
	scanf("%i",&temp4);
	printf("\nEntre com a quinta temperatura: ");
	scanf("%i",&temp5);
	media=(temp1+temp2+temp3+temp4+temp5)/5;
	printf("\nMedia=%2.2f\n",media);
	if (media>=30){
		printf("Temperatura acima da media, calor\n");
				  }
	else{
		if (media<=15){
			printf("Temperatura a baixo da media, frio\n");
	   				  }
	else{
		if (media<30 and media>15){ //Essa parte não é necessária
			printf("Temperatura mediana, temperatura agradavel\n");
		                          }
	    }
	    }
	system ("pause");
    	}
