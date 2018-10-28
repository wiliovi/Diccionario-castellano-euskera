#include <stdio.h>
#include <stdlib.h>
#define N 10

int main (void){
	int t[N], i=0, num,salir=0, menor, aux, j=0, pos_menor;
	while(i<N && salir==0){
		printf("Introduce 10 numeros (NEGATIVO PARA TERMINAR), vas por el numero %d:", i+1);
		scanf("%d", &t[i]);
		if(t[i]>=0){
			i++;
		}
		else{
			salir=1;
		}
	}
	aux = t[0];
	menor= t[0];
	for (j=0;j<i;j++){
		if(t[j]<menor){
			menor = t[j];
			pos_menor=j;
		}
	}
	t[0]= menor;
	t[pos_menor]=aux;
	j=0;
	while(j<i ){
		printf("posicion %d, numero %d \n", j, t[j]);
		j++;
	}	
	system ("PAUSE");
	return 0;
}
