#include <stdio.h>

int main()
{
   int senha ;
   int codigo ;
   int tentativa = 1;
   do{
       printf("Digite o código :\n ");
       scanf("%d",&codigo);
       printf("Digite a senha :\n ");
       scanf("%d",&senha);
       if(codigo == 1234 && senha == 2026){
           printf("Acesso autorizado\n");
           break;
       }else{
           printf("Acesso negado\n");
       }
       if (tentativa == 3){
           printf("Acesso bloqueado\n");
           break;
       }
        tentativa++;
       
       
   }while(tentativa<=3 || codigo == 1234 && senha == 2026);
    return 0;
}