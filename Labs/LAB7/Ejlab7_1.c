#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(void){
int t[N],i,lon,num,aux;
i=0;
while(i<N){
		printf("Introduce 10 numeros, vas por el numero %d:", i+1);
		scanf("%d", &t[i]);
		i++;
}
lon=i;
aux=t[0];
printf ("aux %d\n",aux);1	
i=1;
while(i <lon){
	t[i-1]=t[i];
	i=i++;
}
t[lon-1]=aux;
i=0;
while(i <lon){
printf("%d\n",t[i]);
i=i+1;
}
system("PAUSE");
return 0;
}
