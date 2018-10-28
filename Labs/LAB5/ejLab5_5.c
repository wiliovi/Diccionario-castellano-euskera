#include <stdio.h>
#include <stdlib.h>



int pedir_numero_mayor(void);
int calcular_fibonacci(int);

int main (void){
	int x;
	x = pedir_numero_mayor();

	calcular_fibonacci(x);

system ("PAUSE");
return 0;
}


int calcular_fibonacci(int x){
	int fibonacci0=0, fibonacci1=1,fibonacci2=0,i=1;
	printf("%d valor de x\n", x);
	printf("Fibonacci(%d) = %d\n", i,fibonacci0);
	printf("Fibonacci(%d) = %d\n", i,fibonacci1);
	for(i=2;i<x;i++){
		
	fibonacci2 = fibonacci0 +fibonacci1;
	printf("Fibonacci(%d) = %d\n", i,fibonacci2);
	fibonacci0=fibonacci1;
	fibonacci1=fibonacci2;
	}
	
}

int pedir_numero_mayor(void){
	int z;
	printf("Introduce un numero entero >=1:");
	scanf("%d", &z);
	while (z<=1){
		printf("El dato introducido no es correcto:");
		fflush(stdin);
		scanf("%d", &z);
	}
	return z;
}
