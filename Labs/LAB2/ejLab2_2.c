# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	int long1,long2,long3;
	printf("Introduce los lados del triangulo _,_,_: ");
	scanf("%d,%d,%d", &long1,&long2,&long3);
	if (long1==long2&&long2==long3)
	{
		printf("El triangulo es equilatero.\n");
	}
	else 
	{
		if (long1==long2&&long2!=long3||long1!=long2&&long2==long3||long1==long3&&long2!=long3)	
		{		
			printf("El triangulo es isosceles. \n");
		}
		else
		{
			printf("El triangulo es escaleno. \n");
		}
	}
		
	system("PAUSE");
	return 0;
}
