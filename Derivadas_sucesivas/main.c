#include <stdio.h>
#include <stdlib.h>

#define X 2
#define DELTA 0.001
#define MIN 2
#define MAX 20

int pedir_grado_polinomio ( int );
void pedir_datos_polinomio ( int , int [] );
void mostrar_polinomio ( int , int [] );
int valor_del_polinomio ( int , int  , int [] );
void derivar ( int , int [] , int [] );

void derivar ( int grado , int poli [] , int deri [] ){

  while ( grado >= 0  ) {
    int ngrado=grado-1;
    if (ngrado < 0) {
      break;
    }
    while ( grado > 0 ) {
      deri[grado-1]=poli[grado]*grado;
      grado--;
    }
    mostrar_polinomio(ngrado,deri);
    grado=ngrado;
    while (ngrado >= 0) {
      poli[ngrado]=deri[ngrado];
      ngrado--;
    }
  }
}

int valor_del_polinomio ( int grado , int x , int coe [] ){

  int i = 1;
  int num = 0;

  while ( grado > 0) {
    while ( i < grado ) {x=x*x;i++;}
    num=x*coe[grado]+num;
    i = 1;
    x=X;
    grado--;
  }
  num=num+coe[0];
  return num;
}

void mostrar_polinomio ( int grado , int poli [] ){

  while (grado >= 0) {

    if (grado > 0) {
      if (poli[grado] > 0) {
        printf("+%dX^%d",poli[grado],grado);
      }
      else{
        printf("%dX^%d",poli[grado],grado);
      }
    }
    if (grado <= 0) {
      if (poli[grado] > 0) {
        printf("+%d",poli[grado]);
      }
      else{
        printf("%d",poli[grado]);
      }
    }
    grado--;
  }
  printf("\n");
}

void pedir_datos_polinomio (int grado , int coe []){

  while (grado >= 0) {
    printf("coeficiente [%d]:",grado);
    scanf("%d",&coe[grado]);
    grado--;
  }
}

int pedir_grado_polinomio ( int num ){

  do {
    printf("Introduce el grado del polinomio [%d,%d]:",MIN,MAX);
    scanf("%d",&num);
    if (num < MIN || num > MAX) {
      printf("Error:el grado debe estar en el intervalo [%d,%d]\n",MIN,MAX);
    }
  } while(num < MIN || num > MAX);

  return num;
}

void main() {

  int grado;
  int poli[MAX],deri[MAX];

  grado=pedir_grado_polinomio(grado);
  pedir_datos_polinomio(grado,poli);
  mostrar_polinomio(grado,poli);
  printf("el valor del polinomio, cuando x vale %d es %d\n",X,valor_del_polinomio(grado,X,poli));
  derivar(grado,poli,deri);
}
