#include <stdio.h>
// Maria Luiza de Matos Ribeiro
int soma(int a, int b);
int main() {
	int num1, num2, resultado;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	resultado = soma(num1, num2);
	printf("A soma de %d e %d e: %d\n", num1, num2, resultado);
	return 0;
}
int soma(int a, int b) {
	return a + b;
}