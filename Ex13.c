#include<stdio.h>
#include "bibliotecaArray.h"

int main()
{
	int N, M, i, j;
	srand(time(NULL));
	N = 1 + rand()%30;
	M = 1 + rand()%30;
	
	int A[N], B[M];
	
	gerax(A, N, 2);
	gerax(B, M, 3);
	
	printVet(A, N);
	printVet(B, M);
	printf("\n");
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			if(A[i] == B[j])
			{
				printf("O valor de A[%i] e igual a B[%i], sendo o valor %i\n", i, j, A[i]);
			}
		}
	}
}
