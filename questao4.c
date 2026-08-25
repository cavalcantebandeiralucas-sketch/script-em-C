#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    float comanda;
    float desconto;
    float total;
    printf("Por gentileza digitar o valor da comanda: \n");
    scanf("%f", &comanda);
    if (comanda >= 500) {
        desconto = comanda* 0.15;
        total = (1-0.15)*comanda;
    }else {
        desconto = comanda* 0.05;
        total = (1-0.05)*comanda;
    
    }
        
    printf("Comanda: %.2f\n", comanda);
    printf("Desconto: %.2f\n", desconto);
    printf("Total: %.2f\n", total);
    return 0;
}