#include<stdio.h>
#include "bibliotecaMatriz.h"

int main()
{
	int N=5, M=5, matriz[5][100], i, j;
	geraMatriz(matriz, N, M);
	printf("Diagonal principal dessa matriz 5x5: \n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(i == j)
			{
				printf("[%i][%i] = %i\n", i, j, matriz[i][j]);
			}
		}
	}
}
