#include<stdio.h>
#include "bibliotecaMatriz.h"

int main()
{
	int linha=3, coluna=3, matriz[3][100], X, i, j, cont=0;
	printf("Digite um numero: ");
	scanf("%i", &X);
	printf("Digite sua matriz: ");
	leiaMatriz(matriz, linha, coluna);
	for(i=0;i<linha;i++)
	{
		for(j=0;j<coluna;j++)
		{
			if(matriz[i][j] == X)
			{
				cont++;
			}
		}
	}
	printf("Tiveram %i numeros dentro da matriz que foram iguais a %i", cont, X);
}
