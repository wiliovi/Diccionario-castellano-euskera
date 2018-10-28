# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int num;
	printf("Introduce un numero para saber si es par: ");
	scanf("%d", &num);
	if (num%2==0)
	{
		printf ("Es par\n");
	}	
	else
	{
		printf("Es impar\n");
	}
	system("PAUSE");
	return 0;
}
