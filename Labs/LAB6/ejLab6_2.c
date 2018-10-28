#include <stdio.h>
#include <stdlib.h>

int numero_enteros(void);
int calcular_raiz (int,int);
int mi_pow(int,int);
char seguir_calculando();

int main (void){
int x, y,raiz;
char resp;
	do{
	x = numeros_enteros();
	y = numeros_enteros();
	calcular_raiz(x,y);	
	resp=seguir_calculando();
	}while (resp=='s');
	system("PAUSE");
	return 0;
}


int numeros_enteros(void){
int num;
	printf("Introduce un numeros entero >=1:");
	fflush(stdin);
	scanf("%d", &num);
		while (num<1){
		fflush(stdin);
		printf("El numero no es mayor que >=1, introduce un numeros entero >=1:");
		scanf("%d", &num);
		}	
}
int calcular_raiz(int x,int y){
	int i=0, raiz;
	while (raiz<x){
		raiz = mi_pow(i,y);
		i++;
	}
	raiz=i-2;
	printf("Raiz %d\n", raiz);
	return raiz;
}

int mi_pow(int num,int y){
	int i, res=1;
	for(i=0;i<y;++i){
		res=res*num;
	}
	return(res);
	
}

char seguir_calculando(void){
	char resp;
	fflush(stdin);
	printf("Quieres calcular otra raiz?:");
	scanf("%c", &resp);	
	fflush(stdin);
	while ((resp!='s') && (resp!='n')){
	fflush(stdin);
	printf("Introduce s/n?:");
	scanf("%c", &resp);	
	fflush(stdin);
	}
	return resp;
}

