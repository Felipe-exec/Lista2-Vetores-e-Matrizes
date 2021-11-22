#include<stdio.h>
#include "bibliotecaArray.h"

int main()
{
	int n, loop;
	float A[n];
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &n);
	srand(time(NULL));
	for (loop=0; loop < n; loop++)
	{
		A[loop] = rand()%50;
	}
	for (loop=0; loop < n; loop++)
	{
		printf("%0.2f |", A[loop]);
	}
	float maior=A[0], menor=A[0];
	for (loop = 0; loop < n; loop++)
	{
		if(A[loop] > maior)
		{
			maior = A[loop];
		}
		if(A[loop] < menor)
		{
			menor = A[loop];
		}
	}
	printf("\nO maior valor: %0.2f", maior);
	printf("\nO menor valor: %0.2f", menor);
}
