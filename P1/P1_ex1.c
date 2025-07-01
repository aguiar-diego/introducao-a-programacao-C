#include <stdio.h>

int main(){
    float TC=0, TF=0;
    printf("Digite a temperatura em celcius: ");
    scanf("%f", &TC);
    TF= 9*TC/5 + 32;
    printf("\nTemperatura em Farenheit: %.2f",TF);
    return 0;
}