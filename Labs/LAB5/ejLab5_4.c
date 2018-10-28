#include <stdio.h>
#include <stdlib.h>



int es_medio (int);
int preguntar_otro_medio(void);


int main (void){
	int a,i=1,resp;
	do{
	a=0;
	while(a!=1){
		a=es_medio(i);
		i++;
	}
	resp=preguntar_otro_medio();
	}while(resp=='s');
	system("PAUSE");
	return 0;
}
int es_medio(int num){
	int i, suma_predecesores=0,suma_sucesores, a;
	for (i=1;i<num;i++){
		suma_predecesores=suma_predecesores+i;
	}
	suma_sucesores = num +1;
	while (suma_predecesores>suma_sucesores){
		num =num+1;
		suma_sucesores = suma_sucesores+(num+1);
	}
	if (suma_predecesores==suma_sucesores){
		a=1;
		printf("El numero medio es %d\n", i);
	}
	else if (suma_sucesores>suma_predecesores){
		a=0;
	}
 return (a);
}

int preguntar_otro_medio (void){
	char resp;
	printf("Quieres el siguiente numero medio?:");
	fflush(stdin);
	scanf("%c", &resp);
	while (resp!='s' && resp!='n'){
		printf("El dato introducido no es adecuado.\n");
		printf("Quieres el siguiente numero medio?:");
		fflush(stdin);
		scanf("%c", &resp);
	}
	return resp;
	
}

