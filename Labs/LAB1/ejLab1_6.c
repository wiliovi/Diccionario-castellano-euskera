#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	# define P1 3
	# define P2 4
	# define P3 5
	int semanas,dias,totalhoras,horas,horario;
	int p1,p2,p3;
	int x,y,z;
	printf ("Introduce numero de piezas P1: ");
	scanf("%d",&x);
	printf ("Introduce numero de piezas P2: ");
	scanf("%d",&y);
	printf ("Introduce numero de piezas P3: ");
	scanf("%d",&z);
	p1=x*P1;
	p2=y*P2;
	p3=z*P3;
	totalhoras=p1+p2+p3;
	semanas= totalhoras/40;
	dias=(totalhoras%40)/8;
	horas=((totalhoras%40)%8);
	horario= 8+horas;
	printf ("El total de horas necesarias es: %d\n", totalhoras);
	printf("Teniendo en cuenta el horario de la empresa, si se empezaran maniana\n a fabricar las piezas, acabarian despues de %d semanas \n y %d dias completos de trabajo, a las %d horas del dia siguiente.\n",semanas,dias,horario);
	system ("PAUSE");
	
}
