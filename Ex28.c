#include<stdio.h>
#include "bibliotecaMatriz.h"

int main()
{
	int N, M, matriz[100][100], i, j, soma=0;
	srand(time(NULL));
	N = rand()%10;
	M = N;
	geraMatriz(matriz, N, M);
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(i == j)
			{
				soma += matriz[i][j];
			}
		}
	}
	mostraMatriz(matriz, N, M);
	printf("A soma da diagonal principal e: %i", soma);
}
