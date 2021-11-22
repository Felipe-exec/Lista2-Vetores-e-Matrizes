#include <stdio.h>
#include"bibliotecaMatriz.h"

int main()
{
	int m[100][100], linhas, cols, maior, menor, i, j;
	printf("Quantidade de linhas e colunas: ");
	scanf("%i%i", &linhas, &cols);
	leiaMatriz(m, linhas, cols);
	printf("Matriz Gerada:\n");
	mostraMatriz(m, linhas, cols);
	maior = m[0][0];
	menor = m[0][0];
	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < cols; j++)
		{
			if (m[i][j] < menor)
			{
				menor = m[i][j];
			}
			else
			{
				if (m[i][j] > maior)
				{
					maior = m[i][j];
				}
			}
		}
	}
	printf("O maior elemento é: %i\n", maior);
	printf("O menor elemento é: %i\n", menor);
	return 0;
}
