# include <stdio.h>
# include <stdlib.h>

int main (void){
	long horas1, min1, seg1, horas2, min2, seg2, horas3 = 0, min3 = 0, seg3 = 0;
	printf("Introduce dos hora _:_:_ / _:_:_ : y comprueba la duracion total:");
	scanf("%d:%d:%d / %d:%d:%d", &horas1, &min1, &seg1, &horas2, &min2, &seg2);
	if (horas1>24 || min1>59 || seg1>59 || horas2>24 || min2>59 || seg2>59) {
		printf ("La hora no es correcta\n");
	}
	else
		seg3 = seg1 + seg2;
		min3 = min1 + min2;
		horas3 = horas1 + horas2;
		if (seg3>59){
			min3 = min3 + seg3/60;
			seg3 = seg3%60;
		}
		if(min3>59){
			horas3 = horas3 + min3/60;
			min3 = min3%60;
			}
		if(horas3>23){
			horas3 = horas3 - 24;
				}
	printf ("La duracion total %d:%d:%d\n", horas3,min3,seg3);
	system ("PAUSE");
	return 0;
}
