# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int dia,mes,anio;
	printf("Introduce luna fecha anio/mes/dia: ");
	scanf("%d/%d/%d", &anio,&mes,&dia);

	if (mes>12||mes<0||dia<0||anio<0)
	{
		printf("La fecha es incorrecta.\n");
	}	
	else
	{
		if (mes==2)
		{
			if ((anio%4==0 && anio%100!=0) || anio%400==0)
			{	
				if (dia<=29)
				{
					printf("La fecha es correcta 1. \n");
				}
				else
				{
					printf("Febrero en anio bisiesto tiene 29 dias. \n");
				}
			}
			else
			{
				if (dia<=28)
				{
					printf("La fecha es correcta. \n");
				}
				else{
					printf("La fecha es incorrecta. \n");
				}	
			}
		}
		else if(mes==4 ||mes==6 ||mes==9 ||mes==11)
			{
				if (dia<=30)
				{
					printf("La fecha es correcta.\n");
				}
				else
				{
					printf("Este mes solo tiene 30 dias. \n");
				}
			}	
		else
			{
				if (dia<=31)
				{
					printf("La fecha es correcta.\n");
				}
				else
				{
					printf("Este mes tiene 31 dias. \n");
				}
			}	
	}	
	
	system("PAUSE");
	return 0;
}
