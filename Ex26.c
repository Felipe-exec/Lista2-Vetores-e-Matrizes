#include<stdio.h>
#include "bibliotecaMatriz.h"

int main()
{
	int N=0, M=0, matriz[100][100], i, j;
	srand(time(NULL));
	N = rand()%5;
	M = N;
	geraMatriz(matriz, N, M);
	printf("Diagonal principal dessa matriz aleatoria(de ordem 1 a 5): \n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(i == j)
			{
				matriz[i][j] = 1;
			}
			else
			{
				matriz[i][j] = 0;
			}
		}
	}
	mostraMatriz(matriz, N, M);
}
