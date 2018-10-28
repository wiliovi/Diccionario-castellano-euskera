# include <stdio.h>
# include <stdlib.h>

int main (void){
	
	int num, max=0;
	do  {
		printf("Introduce un numero para saber si es el maximo introducido, cero para terminar:");
		scanf ("%d",&num);
		if (num > max){
			max = num;
		}
		printf("Numero introducido %d, maximo hasta el momento %d\n", num, max);
	}	while (num !=0)	;

	system ("PAUSE");
	return 0;
}
