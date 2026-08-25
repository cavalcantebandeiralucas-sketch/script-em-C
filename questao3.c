#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	float orcamento;
	printf("\n Olá João e Maria, sejam bem vindos ao programa que irá avaliar suas possibilidades de viagem :) \n");
	printf("\n Por gentileza inserir valor para o orçamento de viagem : \n ");
	scanf("%d",&orcamento);
	if (orcamento>=10000){
		printf("\nVocê irá fazer uma viagem internacional!\n");
	}else{
		printf("Você irá fazer uma viagem nacional");
	}
	return 0;
}
