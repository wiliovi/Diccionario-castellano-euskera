#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int num, numresto = 0,  a = 0, b = 0, c = 0;
	printf ("Introduce un numero para saber si es capicua: "); //1231
	scanf ("%d", &num);
	a = num; // a = 1231
	while (a != 0){ 
	b = a%10;
	a = a/10;
	c = c*10+b;
	}

	if (num == c){
	printf("%d es capicua.\n", num);
	}
	else{
	printf("%d no es capicua.\n", num);
	}		
system ("PAUSE");
return 0;
}

