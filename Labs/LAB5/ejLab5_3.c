#include <stdio.h>
#include <stdlib.h>

long pedir_numero_mayor ();
long es_perfecto (long x);
long mostrar_perfecto(long x, long p);


long main (void){
	long num, perf, i ,e, f;
	num = pedir_numero_mayor();
	e=num;
	for (i=num;i>0;i--)
	{
		f = es_perfecto(e);
		mostrar_perfecto(e, f);
		e--;
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
	return (z);
}

long es_perfecto (long num){
	long i, sumadiv=0, a=0;
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
return (a);
}

long mostrar_perfecto (long x, long p){
	if(p==1){
		printf("%ld es perfecto\n", x);
	}
	return 0;
}
