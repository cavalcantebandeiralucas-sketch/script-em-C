#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    float salario, percentual, bonus, novo_salario;
    printf("Digite o salário: ");
    scanf("%f", &salario);
    if (salario<3000){
        percentual = 0.10;
        bonus = salario * percentual;
        novo_salario = salario + bonus;
         }else{
            percentual = 0.05;
            bonus = salario * percentual;
            novo_salario = salario + bonus;
         }
    printf("O novo salário é: %.2f\n", novo_salario);
    printf("O bônus é: %.2f\n", bonus);
    printf("O percentual aplicado é: %.2f%%\n", percentual*100);
    printf("O salário antigo era: %.2f\n", salario);
    return 0;
}