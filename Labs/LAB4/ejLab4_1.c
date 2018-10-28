# include <stdio.h>
# include <stdlib.h>

int main (void){

int n, num, i;
printf("\n introduce un número entre 1 y 10:");
scanf("%d", &n);
while ((n<1) || (n>10)){
	printf ("\n El numero no es adecuado introduce otro:");
	scanf ("%d", &n);
}
for (num = 1; num<=n; num = num +1){
	printf("\n");
	for (i = 1;i<=num; i++){
	printf("*");
	}
}
system ("PAUSE");
return 0;
}
