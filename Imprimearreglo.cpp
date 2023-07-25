//JOSE ALFREDO CASTILLO ORTIZ 1949648 M4
//Programa que crea e imprime un arreglo unidimensional
//Librerias

#include <stdio.h>
int main(){
	
	//Declaracion de variables
	int arreglo[100],i,n;
	
	//Ingreso de datos
	printf("Ingresa el tamaño del arreglo: ");
	scanf("%d",& n);
	
	//For para ingresar elementos
	for (i=1;i<=n;i++){
		printf("Ingresa el elemento: ");
		scanf("%d",& arreglo[i]);
	}
	
	//Impresion de datos mediante For
	printf("-------DATOS-------\n");
	for (i=1;i<=n;i++){
		printf("	%d \n",arreglo[i]);
		
	}
	printf("------------------");	
}
