#include<stdio.h>
#include "bibliotecaArray.h"

int main()
{
	int N, X, loop, vetorA[10], vetorB[10];
	printf("Digite um valor para X: ");
	scanf("%i", &X);
	printf("Escreva o valor do vetor A, que possui 10 elementos: ");
	for(loop = 0; loop < 10; loop++)
	{
		scanf("%i", &N);
		vetorB[loop] = N*X;
	}
	printVet(vetorB, 10);
}
