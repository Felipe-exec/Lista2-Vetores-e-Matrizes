#include<stdio.h>
#include "bibliotecaArray.h"

int main()
{
	int v[100], n, i, cp=0, ci=0;
	float sp=0;
	printf("Quantidade de elementos para o vetor: ");
	scanf("%i", &n);
	gera(v, n);
	printVet(v, n);
	for(i=0; i < n; i++)
	{
		if(v[i]%2 == 0)
		{
			cp++;
			sp+= v[i];
		}
		else
		{
			ci++;
		}
	}
	printf("Quantidade de valores impares no vetor: %i\n", ci);
	printf("Quantidade de pares: %i | Media dos pares: %.2f\n", cp, sp/cp);
	return 0;
}
