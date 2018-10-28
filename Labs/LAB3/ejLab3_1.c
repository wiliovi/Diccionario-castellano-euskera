#include <stdio.h>
#include <stdlib.h>
int main(void)
 {
 int cont, num;
 printf("\nIntroduce un numero:");
 scanf("%d", &num);
	cont = 0;
 while (cont < num){
 	cont = cont + 1;
 	if (num%cont==0){
	 printf ("\n %d es divisor de %d\n", cont, num);
		  }
 } 
system ("PAUSE");ç
return 0;
}
