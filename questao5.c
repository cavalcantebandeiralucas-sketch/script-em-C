#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    float temperatura;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura);
    if (temperatura<15) {
        printf("Temperatura baixa.\n");
    }else{
        printf("Temperatura normal ou alta.\n");
    }
   
    return 0;
}