#include<stdio.h>
#include "bibliotecaMatriz.h"

int main()
{
	int N=5, M=5, matriz[5][100];
	geraMatriz(matriz, N, M);
	printf("Diagonal secundaria dessa matriz 5x5: \n");
	printf("[1][5] = %i", matriz[0][4]);
	printf("[2][4] = %i", matriz[1][3]);
	printf("[3][3] = %i", matriz[2][2]);
	printf("[4][2] = %i", matriz[3][1]);
	printf("[5][1] = %i", matriz[4][0]);
}
//nao consegui utilizando for... infelizmente.
