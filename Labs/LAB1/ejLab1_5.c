#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	# define EXTRA 40
	# define ORDINARIA 20
	float ordinaria,extra,sueldo;
	printf("Calculo del sueldo en funcion de horas ordinarias y extras.\n");
	printf("Introduce numero de horas ordinarias: ");
	scanf("%f",&ordinaria);
	printf("Introduce numero de horas extra: ");
	scanf("%f", &extra);
	sueldo=ordinaria*ORDINARIA+extra*EXTRA;
	printf("De acuerdo con los datos introducidos el sueldo es: %f euros", sueldo);
	
	return 0;
	
}


