#include <stdio.h>

int main() {
	float num, num2, div;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	printf("Digite um numero inteiro 2: ");
	scanf("%d", &num2);
	
	div = num/num2;
	
	printf("O valor da divisao e de: %f", div);
	return 0; //retorna 0
	
}