#include <stdio.h>

int main () {

char nome[10000];
	
	printf("Digite seu nome:");
	scanf("%s", &nome);
	
	printf("O nome digitado e: %s", &nome);

	
	return 0;
}