#include <stdio.h>
#include <stdlib.h>
int main(void)
 {
 int cont, num, primo = 0;
 char pregunta;
 do{
 printf("\nIntroduce un numero:");
 scanf("%d", &num);
 	cont = 1;
 	primo = 0;
 	while (cont < num){
 	cont = cont + 1;
 		if (num%cont==0){
 		primo = primo +1;
 		}
 	}
 	if (primo>1){
 	printf ("%d no un numero primo\n", num);
 	}
 	else{
 	printf("%d es un numero primo\n", num); 
	}
	printf("Quieres seguir introduciendo mas numeros?(s/n):" );
	fflush(stdin);
	scanf("%c", &pregunta);
	}
 while (pregunta == 's');
system ("PAUSE");
return 0;
}
