#include <stdio.h>
#include <stdlib.h>

//Mattheus Henrique da Silva Macedo de Souza 
//2021200631


main () {
	float matriz [3][6];
	float totpar, seg, quart, medseg, medquart;
	int i, cont;
	
	totpar=0;
	
	for (i=0; i<3; i++){
		for(cont=0; cont<6;cont++){
			printf("\nDigite o valor na posicao %d %d: \t", i, cont);
			scanf("%f", &matriz[i][cont]);
			if(cont%2==0){
				totpar=totpar+matriz[i][cont];
			}
			if(cont==1){
				seg=seg+matriz[i][cont];
			}
			if(cont==3){
				quart=quart+matriz[i][cont];
			}
			if(cont==5){
				matriz[i][cont]=matriz[i][1]+matriz[i][2];
			}
		}
	}	
	
	medseg=seg/3;
	medquart=quart/3;	
	
	printf("\n A soma de todos os elementos das colunas pares : %.2f \t", totpar);
	printf("\n A media dos elementos aritmetica da segunda coluna: %.2f \t", medseg);
	printf("\n A media dos elementos aritmetica da quarta coluna: %.2f \t", medquart);
	
	for (i=0; i<3; i++){
		for(cont=0; cont<6; cont++){
			printf("\n %.2f \t", matriz[i][cont]);
			
		}
	}	
	
	
	



	return 0;
}
