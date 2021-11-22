#include<stdio.h>
#include "bibliotecaArray.h"
#include<time.h>

int main()
{
	int N, vetor[N], loop, num;
	N = rand()%50;
	gera(vetor, N);
	inicio:
	printf("Digite um numero e veja se voce acerta: ");
	scanf("%i", &num);
	for(loop=0; loop < N; loop++)
	{
		if(num == vetor[loop])
		{
			printf("\nAcertou!");
			printf("\nEle esta na posicao [%i]\n", loop);
			goto inicio;
		}
		
		if(loop == (N-1)) 
		{
			printf("\nErrou!\n");
			goto inicio;	
		}
	}
}
