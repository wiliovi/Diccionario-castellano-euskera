# include <stdio.h>
# include <stdlib.h>

int main (void){
	long horas, min,seg;
	printf("Introduce la hora _:_:_  : ");
	scanf("%d:%d:%d", &horas, &min, &seg);
	if (horas>24 || min>59 || seg>59){
		printf ("La hora no es correcta\n");
	}
	else
		if (seg<58){
		seg = seg+1;
		}
		else{
		seg = 00;
			if (min<58){
			min = min+1;
			}
			else{
			min = 00;
				if (horas<23){
				horas = horas+1;
				}
				else{
				horas = 00;
				}
			}	
		}
	printf ("La hora mas un segundo es %02d:%02d:%02d\n", horas,min,seg);
	system ("PAUSE");
	return 0;
}
