#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int tempo,idade;
    printf("Digite o tempo de serviço do funcionário: ");
    scanf("%d",&tempo);
    printf("Digite a idade do funcionário: ");
    scanf("%d",&idade);
    if (tempo >=1 && idade >= 18) {
        printf("Acesso autorizado.\n");
    } else {
        printf("Acesso não autorizado.\n");
    }
    return 0;
}
