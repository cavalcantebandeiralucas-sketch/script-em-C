#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    float valortotal, percentual, desconto, valorfinal;
    printf("Digite o valor da sua compra: ");
    scanf("%f", &valortotal);
    if (valortotal>=500){
        percentual = 0.15;
        desconto = valortotal * percentual;
        valorfinal = valortotal - desconto;
         }else{
            percentual = 0.05;
            desconto = valortotal * percentual;
            valorfinal = valortotal - desconto;
         }
    printf("O valor final é: %.2f\n", valorfinal);
    printf("O desconto é: %.2f\n", desconto);
    printf("O percentual aplicado é: %.2f%%\n", percentual*100);
    printf("O valor total era: %.2f\n", valortotal);
    return 0;
}