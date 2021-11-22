#include<stdio.h>
#include "bibliotecaMatriz.h"

int main()
{
	int N=5, M=5, matriz[5][100], i, j, par=0, impar=0;
	printf("Digite numeros para essa matriz 5x5: \n");
	leiaMatriz(matriz, N, M);
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(matriz[i][j]%2 == 0)
			{
				par++;
			}
			else
			{
				impar++;
			}
		}
	}
	printf("\nExistem %i numeros pares.", par);
	printf("\nExistem %i numeros impares.", impar);
}
