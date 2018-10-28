# include <stdio.h>
# include <stdlib.h>

int main (void)
{
	int num1, num2, num3;
	printf("Escribe tres numeros separados por coma: ");
	scanf("%d,%d,%d",&num1,&num2,&num3);
	if (num1>=num2&&num2>=num3)
	{
		printf("El orden de mayor a menor es %d, %d, %d \n", num1,num2,num3);
	}
	else if (num1>=num3&&num3>=num2)
	{
		printf("El orden de mayor a menor es %d, %d, %d \n", num1,num3,num2);
	}
	else if (num2>=num1&&num1>=num3)
	{
		printf("El orden de mayor a menor es %d, %d, %d \n", num2,num1,num3);
	}
	else if (num2>=num3&&num3>=num1)
	{
		printf("El orden de mayor a menor es %d, %d, %d \n", num2,num3,num1);
	}
	else if (num3>=num1&&num1>=num2)
	{
		printf("El orden de mayor a menor es %d, %d, %d \n", num3,num1,num2);
	}
	else if (num3>=num2&&num2>=num1)
	{
		printf("El orden de mayor a menor es %d, %d, %d \n", num3,num2,num1);
	}
	
	system ("PAUSE");
	return 0;
}
