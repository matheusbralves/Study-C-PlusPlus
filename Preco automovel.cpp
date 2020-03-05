//Programa Preço de Automóvel

//Chamar bibliotecas

#include <conio.h>
#include <stdio.h>
#include <iostream>

//Declarar variaveis

char nome [30];
float precofinal,precofab;

main (){
	system("cls");
	printf("Entre com o nome do automovel: ");
	scanf("%s",&nome);
	printf("\nEntre com o preco de fabrica: ");
	scanf("%f",&precofab);
	precofinal=precofab+(precofab*45/100)+(precofab*28/100);
	printf("\nPreco final= %2.2f\nNome do carro= %s\n",precofinal,nome);
	system ("pause");
}
