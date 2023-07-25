//Elemento menor
//Jose Alfredo Castillo Ortiz 1949648 M4

#include <stdio.h>

//Declaracion de funciones
void crear_arreglo();
void imprimir_arreglo();
void elemento_menor();

//Variables globales
int arreglo[100],i,n,menor;
main(){//Inicio
	crear_arreglo();
	imprimir_arreglo();
	elemento_menor();
}//Fin

//Desarrollo de funciones
void crear_arreglo(){
	printf("Tamaño del arreglo: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Ingresa el elemento [%d] ",i);
		scanf("%d",&arreglo[i]);
	}
	return;
}

void imprimir_arreglo(){
	for(i=1;i<=n;i++){
		printf("%d \n",arreglo[i]);
	}
	return;
}

void elemento_menor(){
	menor=arreglo[1];
	for(i=2;i<=n;i++){
		if(arreglo[i]<menor){
			menor=arreglo[i];
			
		}
	}
	printf("El elemento menor es: %d \n",menor);
	return;
}
