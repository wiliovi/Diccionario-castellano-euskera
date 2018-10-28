#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	int a,b, res;
	
	do{
		printf("Introduce dos enteros (>=1) separados por una coma:" );
		scanf("%d,%d", &a,&b);
		res = pow(a,b);
		printf("%d elevado a %d es %d\n", a,b,res);	
	}while (a!=0&&b!=0);
	
	system ("PAUSE");
	return 0;
	
}
