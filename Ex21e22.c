#include <stdio.h>
#include "bibliotecaMatriz.h"

int contNumMatriz(int m[100][100],int linhas, int cols, int n){
	int i, j, cont=0;
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
			if(m[i][j]==n)
			   cont++;
	return cont;		   
}
// fim da funcao
int main(){
	int m[100][100], linhas, cols, num, r, i, j,v[100];
	printf("Linhas e colunas da matriz:");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	printf("Valor para verificar na matriz:");
	scanf("%d",&num);
	// chamar a funcao que ira verificar o numero na matriz
	r = contNumMatriz(m,linhas,cols,num);
	printf("O numero %d existe %d vez(es) na matriz\n", num, r);
	
	for(i=0;i<100;i++)
	  v[i]=0;
	  
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		  if(contNumMatriz(m,linhas,cols,m[i][j])>1)
		  	if(v[m[i][j]]==0){
		       printf("Valor %d repetido\n",m[i][j]);
			   v[m[i][j]]=1;
			   }// fim if mostra

	return 0;
}
