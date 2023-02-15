#include <stdio.h>

int main() {
	int num, num2, soma;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("Digite um numero 2: ");
	scanf("%d", &num2);
	
	soma = num + num2;
	
	printf("A soma e de: %d", soma);
	return 0; //retorna 0
	
	printf("Os números digitados sao %d e %d, num, num2");
}