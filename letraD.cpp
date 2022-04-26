#include <stdio.h>
#include <stdlib.h>

//Mattheus Henrique da Silva Macedo de Souza
//2021200631


main (){
	int x[10], y[10], vetor3[10], i;

for(i=0;i<10;i++){
	printf("\n Digite o valor do primeiro vetor na posicao %d:\t", i);
	scanf("%d", &x[i]);
	
	printf("\n Digite o valor do segundo vetor na posicao %d:\t", i);
	scanf("%d", &y[i]);
	
	vetor3[i]=x[i]*y[i];
}	
	
		printf("\n ---Terceiro vetor--- \t");
		
	for(i=0;i<10;i++){
	  printf("\n %d \t", vetor3[i] );
	}
	
	
	
	
	
	return 0;
}
