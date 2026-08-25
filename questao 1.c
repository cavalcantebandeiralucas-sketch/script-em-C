#include <stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	printf("\n Digite um número : \n ");
	scanf("%d",&numero);
	if (numero>0)
	{
	printf("\n O número e positivo \n");
	}
	else{
		printf("\n O número é negativo \n");
	}
	
    return 0;
}
