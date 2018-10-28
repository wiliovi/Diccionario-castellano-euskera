#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(void){
	int t[N];
	int i,lon,num,aux;
	while(i<N){
		printf("Introduce 10 numeros, vas por el numero %d:", i+1);
		scanf("%d", &t[i]);
		i++;
	}
	i=0;
	aux=t[9];
	printf ("aux %d\n",aux);	
	i=9;
	while(i >=0){
		t[i]=t[i-1];
		i=i-1;
	}
	t[0]= aux;
	i=0;
	while(i <N ){
		printf("posicion %d, numero %d \n", i, t[i]);
		i++;
	}	
system("PAUSE");
return 0;
}
