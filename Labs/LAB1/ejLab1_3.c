#include <stdio.h>
#include <stdlib.h>

/*conversion de euros a pesetas*/

int main(void)
{
	float euros;
	float pesetas;
	printf("Conversion de euros a pesetas\n");
	printf("Introduce los Euros: ");
	scanf("%f", &euros);
	pesetas= euros*166.386;
	printf("\nlas pesetas son:%f", pesetas);
	system ("PAUSE");
	
	return 0;
}
