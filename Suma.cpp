//JOSE ALFREDO CASTILLO ORTIZ 1949648 M4
//Programa que crea e imprime un arreglo unidimensional
//Librerias
#include <stdio.h>
int main(){
	int arreglo[100],i,n,suma;
	suma=0;
	printf("Ingresa el tamaño del arreglo: ");
	scanf("%d",& n);
	
	
	for (i=1;i<=n;i++){
		printf("Ingresa el elemento: [%d] ",i);
		scanf("%d",& arreglo[i]);
		suma=suma+arreglo[i];
	}
	printf("----------------\n",suma);
	for (i=1;i<=n;i++){
		printf("\t %d \n",arreglo[i]);
	}
	
	printf("----------------\n",suma);
	printf("Suma: %d \n",suma);
	printf("----------------",suma);
}//Fin
