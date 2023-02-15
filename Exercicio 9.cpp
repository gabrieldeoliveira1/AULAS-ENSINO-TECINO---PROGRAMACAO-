#include <stdio.h>

int main () {
	
	float raio, perimetro, area;
	float pi = 3.14;
	printf("Digite o valor do raio da circunferencia:");
	scanf("%f", &raio );
	perimetro = raio * 2 * pi;
	printf ("O valor do perimetro e de: %0.2f\n", perimetro);
	
	area = raio * raio * pi;
	printf("E o valor da area e de: %0.2f ", area);
	
}