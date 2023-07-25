//Jose alfredo castillo ortiz 1949648 M4
#include <stdio.h>
int main(){
	int x[100],i,n,mayor;
	printf("Tamano del arreglo: ");
	scanf("%d",&n);
	mayor=0;
	for(i=1;i<=n;i++){
		printf("Ingresa el elemento: ");
		scanf("%d",&x[i]);
		if(x[i]>mayor){
			mayor=x[i];
		}
	}
	
	for(i=1;i<=n;i++){
		printf("%i.- %d\n",i,x[i]);
	}
	printf("Mayor: %d\n",mayor);
	
}
