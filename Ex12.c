#include<stdio.h>
#include "bibliotecaArray.h"

int main()
{
	int N, loop, loop2;
	int dado[6] = {1, 2, 3, 4, 5, 6}; //dado com 6 valores,
	
	int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0, v6 = 0;
	
	
	srand(time(NULL));
	N = rand()%50; //gerando valor aleatorio para N vezes jogadas.
	int vezes[N];
	
	int i;
	srand(time(NULL));
	
	for(i = 0;i < N; i++)
	{
		vezes[i] = 1 + rand()%6;
	}
	printVet(vezes, N);
	
	for(loop = 0; loop < N; loop++)
	{
		if(vezes[loop] == 1)
		{
			v1++;
		}
		if(vezes[loop] == 2)
		{
			v2++;
		}
		if(vezes[loop] == 3)
		{
			v3++;
		}
		if(vezes[loop] == 4)
		{
			v4++;
		}
		if(vezes[loop] == 5)
		{
			v5++;
		}
		if(vezes[loop] == 6)
		{
			v6++;
		}
	}
	printf("Face 1 = %i\n", v1);
	printf("Face 2 = %i\n", v2);
	printf("Face 3 = %i\n", v3);
	printf("Face 4 = %i\n", v4);
	printf("Face 5 = %i\n", v5);
	printf("Face 6 = %i", v6);
}
