#include <stdio.h>
#include <stdlib.h>

//Mattheus Henrique da Silva Macedo de Souza
//2021200631



int main () {
	
 float vetor[10];

    for (int i=0; i<10; i++) {
        printf("\nDigite o valor do elemento %d: ", i);
        scanf("%f", &vetor[i]);
    }
    
    float temp;
    for (int i=9; i > 0; i--){
        for(int j = 1; j<= i; j++){
            if (vetor [j-1] > vetor[j] ){
                temp = vetor[j-1];
                vetor[j-1] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
printf("O valor ordenado e: ");
for (int i=0; i<10; i++){
    printf("%.2f ",vetor[i]);
}
system ("pause");
return 0;

}
