#include <stdio.h>
#include <stdlib.h>
#define N 10

int main (void){
	float t[N];
	int salir=0, i=0, j=0, k=0, aux;
	while (i<N && salir==0){
		printf("Introduce 10 numeros (NEGATIVO PARA TERMINAR), vas por el numero %d:", i+1);
		scanf("%f", &t[i]);
		if (t[i]>=0){
			i++;
		}
		else{
			salir =1;
		}
	}
	while (k<N){
		if (t[k]<t[k+1]){
			aux = t[k];
			t[k]= t[k+1];
			t[k+1]=aux;
			k =0;
		}	
		else{
			k++;
		}
		
	}
	while (j<i){
		printf("posicion %d, numero %f \n", j, t[j]);
		j++;
	}	
	system ("PAUSE");
	return 0;
}
