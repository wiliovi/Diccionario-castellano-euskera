#include <stdlib.h>
#include <stdio.h>

#define PI 3.1415

int main(void)
{
 	float radio,area,longitud;
 	printf("Introduce el radio:");
	scanf("%f",&radio);
 	longitud=2*PI*radio;
 	printf("Longitud: %.2f",longitud);
	area=PI*radio*radio;
 	printf("\nArea: %.2f\n",area);
	system("PAUSE");
 
 
 return 0;
}
