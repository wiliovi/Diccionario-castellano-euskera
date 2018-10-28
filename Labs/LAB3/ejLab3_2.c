#include <stdio.h>
#include <stdlib.h>
int main(void)
 {
 int cont, num;
 printf("\nIntroduce un numero:");
 scanf("%d", &num);
	cont = 2;
 while (cont < num){
     if (num%cont==0){
	 	cont = num;
	 	printf("%d no es primo\n", num);
	 }
 	 cont = cont + 1;
 	}
 if (cont == num){
 	printf("%d es primo\n", num);
 }

system ("PAUSE");
return 0;
}
