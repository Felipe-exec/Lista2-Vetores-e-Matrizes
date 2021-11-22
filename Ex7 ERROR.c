#include<stdio.h>
#include "bibliotecaArray.h"

int main()
{
	int N, loop;
	srand(time(NULL));
	N = rand()%10;
	int vetor1[N], vetor2[N], vetor3[N];
	gera(vetor1, N);
	gera(vetor2, N);
	printVet(vetor1, N);
	printVet(vetor2, N);
	for (loop = 0; loop < N; loop++)
	{
		vetor3[loop] = vetor1[loop] * vetor2[loop];
		printf("[%i] * [%i] = [%i]\n", vetor1[loop, vetor2[loop], vetor3[loop]]);
	}
}
