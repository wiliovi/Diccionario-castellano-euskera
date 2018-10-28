# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int num;
	printf("Introduce un numero para saber si es multiplo de 3: ");
	scanf("%d", &num);
	if (num%2==0)
	{
		if (num%3==0&&num>3)
		{
			printf ("Es par y multiplo de 3\n");
		}
		else
		{
			printf ("Es par y no es multiplo de 3\n");
		}
	}	
	else
	{
		if (num%5==0&&num>5)
		{
			printf("Es impar y es multiplo de 5\n");
		}
		else
		{
			printf("Es impar y no es multiplo de 5\n");
		}
	}
	system("PAUSE");
	return 0;
}
