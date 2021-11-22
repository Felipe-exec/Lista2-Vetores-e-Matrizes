#include<stdio.h>
#include "bibliotecaMatriz.h"

int main()
{
	int N=5, M=5, matriz[5][100], soma;
	geraMatriz(matriz, N, M);
	mostraMatriz(matriz, N, M);
	printf("Diagonal secundaria dessa matriz 5x5: \n");
	soma = matriz[4][0] + matriz[3][1] + matriz[2][2] + matriz[1][3] + matriz[0][4];
	printf("%i", soma);
}
//nao consegui utilizando for... infelizmente.
