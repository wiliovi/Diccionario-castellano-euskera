#include <stdio.he>
#include <stdlib.h>
#include <string.h>
#include "mio.h"

#define N 1000

void leer_datos( char [] );
int obtener_posicion ( char [] , char [] );
void buscar_asterisco ( char [] , char [] , int );
void obtener_traduccion( char[] , char [] , int );
void traducir( char[] , char [] , char [] );
void mostrar ( char [] , char[] , char[] );

void mostrar ( char dic [] , char pa [], char tra [] ){

  char opt;
  if (strcmp(pa,tra) != 0 ) {
    printf("la traduccion de la palabra %s es %s\n",pa,tra);
  }
  else{
    printf("la palabra no se encuentra en el diccionario\n");
  }
}

void traducir (char dic [] , char pa [] , char tra [] ){

  int posc;
  posc=obtener_posicion(dic,pa);

  if (posc == -1) {
    do {
      posc++;
      tra[posc]=pa[posc];
    } while(pa[posc] != '\0');
    tra[posc]='\0';
  }
  else{
    obtener_traduccion(dic,tra,posc);
  }
}

void obtener_traduccion( char dic [], char tra [], int posc ){

  int chk0=0;
  int i=0;

  while (dic[posc] != '*') {
    posc++;
    if (dic[posc]=='*') {
      chk0=1;
    }
  }
  posc++;
  if (chk0) {
    while (dic[posc] != '#' && dic[posc] != '\0') {
      tra[i]=dic[posc];
      i++;
      posc++;
    }
    tra[i]='\0';
  }
}

void buscar_asterisco ( char dic [], char cpp [] , int j){
  int i=0;
  do {
    cpp[i]=dic[j];
    j++;
    i++;
  } while(dic[j] != '*');
  cpp[i]='\0';
}

int obtener_posicion ( char dic [], char pa [] ){
  int posc,aux,i=0;
  int chk0=0,chk1=0;
  char cpp [N];

  while (dic[i] != '\0' && !chk1) {

    if (!chk0 ) {
      buscar_asterisco(dic,cpp,i);
      if (!strcmp(pa,cpp)) {
        aux=i;
        chk1++;
      }
      chk0++;
    }

    if (chk0 && dic[i] == '#') {
      buscar_asterisco(dic,cpp,i+1);
      if (!strcmp(pa,cpp)) {
        aux=i+1;
        chk1++;
      }
    }
  i++;
  }

  if (chk1) {
    return posc=aux;
  }
  else {
    return posc=-1;
  }
}

void leer_datos ( char palabra [] ){

  printf("\nIntroduzca una palabra en castellano:");
  fflush(stdin);
  scanf("%s",palabra);
}

void main( ) {

  char resp = 's';
  char hiztegia [N];
  char palabra[N],traduccion[N];

  do {
    cargar_diccionario(hiztegia);
    leer_datos(palabra);
    traducir(hiztegia,palabra,traduccion);
    mostrar(hiztegia,palabra,traduccion);
    printf("\nDesea continuar?(s/n)");
    fflush(stdin);
    scanf("%s",&resp);
  } while(resp == 's');
}
