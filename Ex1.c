#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaArray.h"

int main(){
	int v[100],qtd,i,soma=0;
	printf("Entre com a quantidade de elementos para o vetor:");
	scanf("%d",&qtd);
	gera(v,qtd);
	printVet(v,qtd);
	for(i=0;i<qtd;i++)
		soma+=v[i];
	printf("Soma dos elementos do vetor:%d\n",soma);	   
	return 0;
}
