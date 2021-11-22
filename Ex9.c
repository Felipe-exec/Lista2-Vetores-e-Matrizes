#include<stdio.h>
#include<string.h>
#define MAX 100

int main()
{
	char vetor[MAX];
	int tamanho, loop;
	gets(vetor);
	tamanho = strlen(vetor);
	for(loop = tamanho; loop >= 0; loop--)
	{
		printf("%c", vetor[loop]);
	}
}
