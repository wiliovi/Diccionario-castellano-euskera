# include <stdio.h>
# include <stdlib.h>

int main (void){
	int x1, x2, y1, y2;
	printf("Introduce dos valores de x para saber en que cuadrante se encuentran P1,P2: ");
	scanf("%d,%d", &x1, &x2);
	
	
	y1 = (x1*x1*x1)-(4*x1*x1)+x1-9; // y1 = f(x1)
	y2 = (x2*x2*x2)-(4*x2*x2)+x2-9; // y2 = f(x2);
	
	if (x1>=0&&y1>=0){
		printf("El primer punto P1(%d,%d) siendo y=f(x) esta en el primer cuadrante \n", x1,y1);
	}
	else if(x1<0&&y1>=0){
			printf("El primer punto P1(%d,%d) siendo y=f(x) esta en el segundo cuadrante \n", x1,y1);
	}
	else if(x1<0&&y1<0){
			printf("El primer punto P1(%d,%d) siendo y=f(x) esta en el tercer cuadrante \n", x1,y1);
	}
	else //  if(x1>=0&&y1<0)
	{
			printf("El primer punto P1(%d,%d) siendo y=f(x) esta en el cuarto cuadrante \n", x1,y1);
	}
	
	if (x2>=0&&y2>=0){
		printf("El segundo punto P2(%d,%d) siendo y=f(x) esta en el primer cuadrante \n", x2,y2);
	}
		else if(x2<0&&y2>=0){
			printf("El segundo punto P2(%d,%d) siendo y=f(x) esta en el segundo cuadrante \n", x2,y2);
		}
		else if(x2<0&&y2<0){
			printf("El segundo punto P2(%d,%d) siendo y=f(x) esta en el tercer cuadrante \n", x2,y2);
		}
		else if(x2>=0&&y2<0){
			printf("El segundo punto P2(%d,%d) siendo y=f(x) esta en el cuarto cuadrante \n", x2,y2);
		}

	return 0;
}
