#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
    int vetor[6], temp, i;
    
    for(i = 0; i < 6; i++){
    	printf("Insira o %d� vetor: ", i + 1);
    	scanf("%d", &vetor[i]);
	}

    printf("\nOriginal: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    for(i = 0; i < 3; i++) {
        temp = vetor[i];
        vetor[i] = vetor[5 - i];
        vetor[5 - i] = temp;
    }

    printf("\nInverso: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
