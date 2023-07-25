//JOSE ALFREDO CASTILLO ORTIZ 1949648 M4

#include<stdio.h>
int main (){
	int i;
	int n;
	int tabla=0; tabla<=10; 
	int multi;
	printf("Ingrese su numero n: ");
	scanf("%d",&n);
	
	printf("\nTabla del %d \n \n",n);
	

	for(i=1;i<=10;i++){//i=i+1;
		
		multi= n*i;
		printf ("%d x %d = %i \n",i,n,multi);
	}
	
	return 0;
}

