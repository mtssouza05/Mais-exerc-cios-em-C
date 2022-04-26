#include <stdio.h>
#include <stdlib.h>

//Mattheus Henrique da Silva Macedo de Souza 
//2021200631



int main () {
int matriz [5][5],i,x,medianota, totnota,maior=0,total,av1,av2;

for (i=0;i<=4;i++){
	total=0;
	
	
	for (x=0;x<4;x++){
		printf("Aluno %d", i+1);
		printf("\n Digite a matricula, em seguida av1, em seguida av2 e a media dos trabalhos respectivamente: \t");
		scanf("%d", &matriz[i][x]);
		
		if(x==1){
			av1=matriz[i][x];
		}
		if(x==2){
			av2=matriz[i][x];
		}
		total=av1+av2;
		medianota=total/2;
		
		if(x==3){
			totnota+=medianota+matriz[i][x];
			
		}
		if(maior<matriz[i][3]){
			maior=matriz[i][0];
		}
		
	}
	
}	



printf("\n A matricula do aluno com maior nota foi: %d \t", maior);
printf("\n A media aritmetica de todas as notas e: %d \t", totnota/5);	
	
	
	
	
	
	
	return 0;
}
