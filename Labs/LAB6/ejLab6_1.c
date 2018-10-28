#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float calcular_raices(float,float,float);
float calcular_raiz_positiva(float,float,float);
float calcular_raiz_negativa(float,float,float);

int main (void){	
float a,b,c;
	printf("Introduce los coeficientes de una ecuacion de segundo grado _,_,_:");
	scanf("%f,%f,%f", &a,&b,&c);
	while (a>0||a<0){
	calcular_raices(a,b,c);
	printf("Introduce los coeficientes de una ecuacion de segundo grado _,_,_:");
	fflush(stdin);
	scanf("%f,%f,%f", &a,&b,&c);
	}
	system("PAUSE");
	return 0;
}

float calcular_raices (float a,float b,float c){
	float z, x,y;
	printf("%f , %f, %f\n",a,b,c);
	z = pow(b,2)-(4*a*c);
	printf("%f\n",z);
	if (z==0){
		x = calcular_raiz_positiva(a,b,z);
		printf("la ecuacion tiene una unica raiz: %f\n", x);
	}
	else{
		if (z<0){
			printf("La ecuacion no tiene raices\n");
		}
		else{
		x =	calcular_raiz_positiva(a,b,z);
		y = calcular_raiz_negativa(a,b,z);
		printf("La ecuacion tiene dos raices:%f y %f\n", x, y);
		}	
	}	
}

float calcular_raiz_positiva(float a,float b, float z){
	float x;
	printf("%f\n",z);
	x = (-b+sqrt(z))/(2*a);
	return x;
}

float calcular_raiz_negativa(float a,float b, float z){
	float y;
	y = (-b-sqrt(z))/(2*a);
	printf("%f\n",y);
	return y;
}
