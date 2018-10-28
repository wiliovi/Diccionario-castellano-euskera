#include <stdio.h>
#include <stdlib.h>

int pedir_numero_mayor (void);
int es_perfecto (int);
void mostrar_perfecto(int numero , int es_o_no_perfecto );
float volumen_cono(float radio, float altura);


int main (void){
	int num, perf;
	num = pedir_numero_mayor();
	perf = es_perfecto(num);
	mostrar_perfecto(perf, num);
	system ("PAUSE");
	return 0;
}



int pedir_numero_mayor(void){
	int z;
	printf("Introduce un numero entero >=1:");
	scanf("%d", &z);
	while (z<1){
		printf("El dato introducido no es correcto:");
		scanf("%d", &z);
	}
	
	return z;
}

int es_perfecto (int num){
	int i, div, perf=0, a=0;
	for(i=1; i<num;i++){	
		if(num%i==0){
		perf = perf+i;
		}
	}
	if (num==perf){
		a=1;
	}
	else{		
		a=0;
	}
return a;
}

void mostrar_perfecto (int x, int p){
	int perf;
	perf =x;
	printf("%d\n", perf);
}
