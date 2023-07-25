//Jose Alfredo Castillo Ortiz 1949648 M4
//Programa que determina el pago de un cliente

#include <stdio.h>
int main () {
	//Declaracion de variables
	int comida,cant;
	float pago;
	char nombre[50];
	
	//Datos y Menu
	
	printf("------------------ M E N U ------------------\n");
	printf("Comida					Precio\n");
	printf("1.- Cortadillo 				$35 \n");
	printf("2.- Chiles rellenos			$40 \n");
	printf("3.- Milanesa de res			$45 \n");
	printf("4.- Milanesa de pollo			$42 \n");
	printf("---------------------------------------------\n");
	printf("Ingrese la comida que desea: ");
	scanf("%d",&comida);
	
	//If
	if(comida>=1 and comida <=4){
		printf("Ingrese el nombre del cliente: ");
		scanf(" %[^\n]",&nombre);
		printf("Ingrese la cantidad de platillos: "); 
		scanf("%d",&cant);
		//Switch
	switch(comida){
		case 1: {
			pago=cant*35;
			printf("---------------------------------------------\n");
			printf("Cortadillo\n");
			break;
		}
		case 2:{
			pago=cant*40;
			printf("---------------------------------------------\n");
			printf("Chiles rellenos\n");
			break;
		}
		case 3:{
			pago=cant*45;
			printf("---------------------------------------------\n");
			printf("Milanesa de res\n");
			break;
		}
		case 4:{
			pago=cant*42;
			printf("---------------------------------------------\n");
			printf("Milanesa de pollo\n");
			break;
		}
		default: {
			printf("---------------------------------------------\n");
			printf("No existe ese platillo\n");
			break;
		}
		}
	//Impresion de datos
	printf("El cliente %s\n",nombre);
	printf("Compro %d platos de comida\n",cant);
	printf("Pagando $%.2f en total",pago);
	}
	else{
		printf("Error, no existe ese platillo\n");
	}	
}
