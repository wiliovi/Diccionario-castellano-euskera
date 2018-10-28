#include <stdio.h>
#include <stdlib.h>

long int pedir_numero_mayor (void);
long int es_perfecto (long int);
long int mostrar_perfecto(long int, long int);


long int main (void){
	long int num, perf, i ,e=1, f;
	num = pedir_numero_mayor();
	for (i=1;i<=num;i++)
	{
		do{
		f = es_perfecto(e);
		mostrar_perfecto(e, f);
		e++;
		}while (f==0);
	
	}
	system ("PAUSE");
	return 0;
}


long pedir_numero_mayor(){
	int z;
	printf("Introduce un numero entero >=1:");
	scanf("%ld", &z);
	while (z<1){
		printf("El dato introducido no es correcto:");
		scanf("%ld", &z);
	}
	return z;
}

long int es_perfecto (long int num){
	long int i, sumadiv=0, a=0;
	for(i=1; i<num;i++){	
		if(num%i==0){
		sumadiv = sumadiv+i;
		}
	}
	if (num==sumadiv){
		a=1;
	}
	else{		
		a=0;
	}
return a;
}

long int mostrar_perfecto (long int x, long int p){
	if(p==1){
		printf("%ld es perfecto\n", x);
	}
	return 0;
}
