#include <string.h>

#define N 1000

void cargar_diccionario(char hiztegia[]) {
  char mi_dic[]="casa*etxe#lunes*astelehena#puerta*ate#mano*esku";
  strcpy(hiztegia,mi_dic);
  printf("\n Hiztegia cargado actualemte:\n%s\n",hiztegia);
}
