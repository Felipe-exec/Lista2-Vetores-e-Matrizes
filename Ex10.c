#include <stdio.h>
#include "bibliotecaArray.h"

int main()
{
	int N, num, loop;
	printf("Tamanho do vetor: ");
	scanf("%i", &N);
	
	int vetor[N];
	
	gera(vetor, N);
	printVet(vetor, N);
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	int count = 0;
	for(loop = 0; loop < N; loop++)
	{
		if(num == vetor[loop])
		{
			printf("Este numero esta na posicao [%i]\n", loop);
			count++;
		}
		if(count == 0 && loop == (N-1))
		{
			printf("Este numero nao faz parte do vetor.\n");
		}
	}
	printf("Este numero repetiu %i vezes.", count);
}
