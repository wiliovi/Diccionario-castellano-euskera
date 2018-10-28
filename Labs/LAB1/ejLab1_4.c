#include <stdio.h>
#include <stdlib.h>

/*Intecambio del contenido de 2 variables*/

int main (void){

	float a,b,c;
	printf("Intecambio del contenido de 2 variables.\n");
	printf("Introduce el valor de A: ");
	scanf("%f",&a);
	c=a;
	printf("Introduce el valor de b: ");
	scanf("%f",&b);
	a=b;
	b=c;
	printf("Tras intercambiar los valores, A vale %f y b vale %f",a,b);
	
	return 0;
	
}
