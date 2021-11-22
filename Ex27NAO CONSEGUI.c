#include<stdio.h>
#include "bibliotecaMatriz.h"

int main()
{
	int linha, coluna, matriz1[100][100], matriz2[100][100], matriz3[100][100], i, j;
	linha = rand()%10;
	coluna = linha;
	geraMatriz(matriz1, linha, coluna);
	geraMatriz(matriz2, linha, coluna);
	for(i=0;i<linha;i++)
	{
		for(j=0;j<coluna;j++)
		{
			if()//teriamos que comparar, de alguma forma, a posicao da matriz1 e matriz2 para dar certo..
			{
				matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
			}
		}
	}
	mostraMatriz(matriz3, linha, coluna);
}
