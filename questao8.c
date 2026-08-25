#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int produtos;
    printf("Digite o número de produtos: ");
    scanf("%d", &produtos);
    if (produtos < 10) {
        printf("Estoque baixo. Necessário realizar reposição\n");
    } else {
        printf("Contabilizado com sucesso.\n");
    }
    return 0;
}