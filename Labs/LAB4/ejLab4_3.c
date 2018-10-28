# include <stdio.h>
# include <stdlib.h>

int main (void){

int n, num, incremento, fact;
char pregunta;

//for (num = 1; num<=n; num = num +1){
//	fact = n * (n-num);
//	printf("%d\n", fact);
//	}
do{	
	incremento = 0;
	fact =1;
	printf("\n introduce un numero:");
	scanf("%d", &n);
	while (incremento <n) {
		fact = fact * (n-incremento);
		incremento ++;
		}
	printf("%d!=%d\n", n, fact);
	printf("Quieres seguir introduciendo mas numeros?(s/n):" );
	fflush(stdin);
	scanf("%c", &pregunta);	
} while (pregunta == 's');

system ("PAUSE");
return 0;
}
