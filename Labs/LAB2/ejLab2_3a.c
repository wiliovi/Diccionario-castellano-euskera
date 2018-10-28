# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int dia,mes,anio;
	printf("Introduce luna fecha anio/mes/dia: ");
	scanf("%d/%d/%d", &anio,&mes,&dia);
	if (mes>12)
	{
		printf("La fecha es incorrecta.\n");
	}	
	else
	{
		if (mes==2)
		{
			if (dia>28)
			{
				printf("Febrero solo tiene 28 dias. \n");
			}	
			else
			{
				printf("La fecha es correcta. \n");
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
		else if (mes==1 ||mes==3 ||mes==5 ||mes==7 ||mes==8 ||mes==10 || 12)
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
