#include <stdio.h>
int main (){

	int a, b, c;
	
	printf("Digite a medida dos 3 lados de um triangulo com espa�os entre cada uma:");
	scanf("%d %d %d" ,&a, &b, &c);
	
	if (a + b > c && a + c > b && b + c > a){
		printf("Formam um triangulo:\n");
		if(a == b && a == c)
			printf("Equilatero\n");
		else
			if(a == b || a == c || b == c)
			printf("Isoceles\n");
			else
			printf("Escaleno\n");
	}
	else
		printf("Os 3 lados nao formam um triangulo.\n");
	
	return 0; 
}
