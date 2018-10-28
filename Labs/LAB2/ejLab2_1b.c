# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int num;
	printf("Introduce un numero para saber si es multiplo de 3: ");
	scanf("%d", &num);
	if (num%3==0&&num>3)
	{
		printf ("Es multiplo de 3\n");
	}	
	else
	{
		printf("No es multiplo de 3\n");
	}
	system("PAUSE");
	return 0;
}
