#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int numero_entero_positivo(void);
int mostrar_triangulo_tartaglia (int);
int calcular_combinatorio(int, int);
int calcular_factorial(int);

int main (void){
	int num, i;
	num = numero_entero_positivo();
	while (num>0){
		printf("Triangulo de tartaglia correspondiente:\n", num);
		for (i=1;i<=num;++i){
		mostrar_triangulo_tartaglia(i);
		}
		num = numero_entero_positivo();
	}	
	system("PAUSE");
	return 0;
}


int numero_entero_positivo (void){
	int num;
	printf("Introduce un numero entero >=1 o 0 para terminar:");
	scanf("%d", &num);
	while (num<0){
		printf("Numero incorrecto.\nIntroduce un número entero <=1 o 0 para terminar:");
		scanf("%d", &num);
	} 
	return num;
}

int mostrar_triangulo_tartaglia(int num){
	int i, x, y=0, comb=1;
	x = num-1;
	for (i=1; i<=num;++i){
		comb = calcular_combinatorio (x, y);
		printf("%d ", comb);
		y ++;
	}
	printf("\n");
}

int calcular_combinatorio (int x, int y){
	int xy, fact_x,fact_y, fact_xy, comb;
	xy= x-y;
	fact_x=calcular_factorial(x);
	fact_y=calcular_factorial(y);
	fact_xy=calcular_factorial(xy);
	comb= fact_x/(fact_y*fact_xy);
	return comb;
}

int calcular_factorial (int num){
	int i, fact=1;
	for (i=1;i<=num;++i){
		fact=fact*i;
	}
	return fact;
}
