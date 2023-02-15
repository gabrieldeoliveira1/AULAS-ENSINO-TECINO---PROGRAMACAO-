#include <stdio.h>

int main () {

	char nome [30];
	
	printf("Digite seu nome:");
	fgets(nome, 30, stdin);
	
	printf("O nome digitado e: %s", nome);

return 0;
}


