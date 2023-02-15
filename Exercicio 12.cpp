#include <stdio.h>
#include <conio.h>

int main () {

int num, num2, num3;

printf("Digite o valor do produto:");
scanf("%f", &num);
printf("Digite a quantidade do produto:");
scanf("%f", &num2);

num3= num * num2;

printf("O valor da compra e de: %0.2f", &num3 );
return 0;
} 