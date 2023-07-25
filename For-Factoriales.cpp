//JOSE ALFREDO CASTILLO ORTIZ 1949648 M4

#include<stdio.h>
int main (){
	int i;
	int n;
	int fact=1;
	printf("Ingrese su numero n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){//i=i+1;
		
		fact= fact*i;

	}
	printf ("El factorial es: %d",fact);	
	return 0;
}

