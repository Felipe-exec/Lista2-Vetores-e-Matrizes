#include<stdio.h>
#include "bibliotecaMatriz.h"

int main()
{
	int m[300][1000], i, j, raio = 0, n, x, y;
	for(i=0; i<100; i++)
	{
		for(j=0; j < 100; j++)
		{
			m[i][j] = 0;
		}
	}
	printf("Quantidade de registros de raio: ");
	scanf("%i", &n);
	for(i=0; i < n; i++)
	{
		printf("Coordenada que o raio caiu: ");
		scanf("%i%i", &x, &y);
		m[x][y]++;
	}
	mostraMatriz(m, 100, 100);
	for(i=0; i<100; i++)
	{
		for(j=0; j < 100; j++)
		{
			if(m[i][j] > 1)
			{
				raio = 1;
			}
		}
	}
	if(raio == 1)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
