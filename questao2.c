#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
	printf("\nDigite o número: \n");
	scanf("%d",&numero);
	if (numero%2==0){
		printf("O número é par ");
	}else{
		printf("O número é ímpar");
	} 
return 0 ;
	
}
