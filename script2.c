#include <stdio.h>

int main()
{
   int i = 1 ;
   int numero;
   int par = 0 ;
   int impar = 0;
   int soma_par = 0;
   int soma_impar = 0;
   while (i<=15){
       printf("Digite o número:\n");
       scanf("%d",&numero);
       i++;
       if(numero%2==0){
           par++;
           soma_par+=numero;
       }else{
           impar++;
           soma_impar+=numero;
       }
   }
    printf("Quantidade de numeros pares : %d\n",par);
    printf("Quantidade de numeros impares : %d\n",impar);
    printf("Soma dos pares:  %d\n",soma_par);
    printf("Soma dos impares : %d\n",soma_impar);

    return 0;
}