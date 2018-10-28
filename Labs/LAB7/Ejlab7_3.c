#include <stdio.h>
#include <stdlib.h>
#define N 10

int contador_repeticiones(int);

int main (void){
	int t[N]={15,23,23,23,5,3,4,4,5,23};
	int	i=0, cont=0, veces_rep=0, max_veces_rep=0, primera_pos, ultima_pos;
	while(i<N ){
		printf("posicion %d, numero %d \n", i, t[i]);
		i++;
	}	
	i=0;
	while (i<N){
			while (t[i]==t[i+1]){
					veces_rep ++;
					i++;
			}
			if (veces_rep>=max_veces_rep){
			max_veces_rep = veces_rep;
			ultima_pos=i;
			primera_pos=i-max_veces_rep;
			veces_rep = 0;
			}
		i ++;
		}	
	printf("El mayor numero de elementos consecutivos iguales que aparece es %d y se encuentran entre las posiciones %d y %d\n ", max_veces_rep+1, primera_pos, ultima_pos);
	system ("PAUSE");
	return 0;
}

int contador_repeticiones (int i){
	int t[N]={15,23,23,5,7,4,4,4,23,23};
	int max_veces_rep;
	printf("valor de i %d\n", i);
	for (i=0;i<N;i++){	
			while (t[i]==t[i+1]){
				max_veces_rep ++;
				printf("repeticiones %d\n", max_veces_rep);
				i++;
				if (t[i]=!t[i+1]){
					i=N;
				}
			}
	}	
	return 	max_veces_rep;
}
