//Programa Salario + case

//Chamar bibliotecas

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <ctype.h>

//Declarar variaveis

char op;
float salario,salarionovo,diferenca;
int cargo;

main (){
	system("cls");
	do{
	
	printf("Digite o numero do cargo do funcionario: ");
	printf("\n101 = Gerente");
	printf("\n102 = Engenheiro");
	printf("\n103 = Tecnico");
	printf("\n104 = Outro\n");
	scanf("%i",&cargo);
	fflush(stdin);
	
	printf("\nEntre com o salario do funcionario: ");
	scanf("%f",&salario);
	fflush(stdin);
	
	switch(cargo){
		
		case 101:
			salarionovo=salario+(salario*0,10);
			diferenca=salarionovo-salario;
			printf("\nCargo Gerente\nSalario = %.2f\nNovo Salario = %.2f\nDiferenca %.2f",salario,salarionovo,diferenca);
			break;
			
		case 102:
			salarionovo=salario+(salario*0,20);
			diferenca=salarionovo-salario;
			printf("\nCargo Engenheiro\nSalario = %.2f\nNovo Salario = %.2f\nDiferenca %.2f",salario,salarionovo,diferenca);
			break;
			
		case 103:
			salarionovo=salario+(salario*0,30);
			diferenca=salarionovo-salario;
			printf("\nCargo Tecnico\nSalario = %.2f\nNovo Salario = %.2f\nDiferenca %.2f",salario,salarionovo,diferenca);
			break;
			
		case 104:
			salarionovo=salario+(salario*0,40);
			diferenca=salarionovo-salario;
			printf("\nCargo Outro\nSalario = %.2f\nNovo Salario = %.2f\nDiferenca %.2f",salario,salarionovo,diferenca);
			break;
	}
	
	printf("\n\nDeseja um novo funcionario? <s> ou <n>: \n");
	op=getche();op=toupper(op);}while(op!='N');
	system("pause");
}
