#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	float n, total=0, num;
	
	do{
		printf("Introduce un numero del 1 al 10:");
		scanf("%f", &n);
	}while (n>10 || n<1);
	for (num =1; num<=n; num++){
		printf("%f\n", num);
		total =total + (num /pow(2, num));
		printf("total+%f/2 = %f\n\n",num, total);
	}			
	system ("PAUSE");
	return 0;	 
}
