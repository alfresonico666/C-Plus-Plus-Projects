//Jose Alfredo Castillo Ortiz 1949648 M4
#include <stdio.h>
int main () {
	//Declaracion de variables
	int depto,horas;
	float pago;
	char nombre[50];
	
	//Datos y Menu
	printf("Ingrese el nombre del trabajador: \n");
	scanf("%[^\n]",&nombre);
	printf("------------------ DEPARTAMENTOS ------------------\n");
	printf("DEPARTAMENTOS				$/hr\n");
	printf("1.- Sistemas 				$35.50 \n");
	printf("2.- Produccion				$40.85 \n");
	printf("3.- Contabilidad			$20.14 \n");
	printf("---------------------------------------------------\n");
	printf("Ingrese su departamento: \n");
	scanf("%d",&depto);
	printf("Ingrese la cantidad de horas trabajadas: \n");
	scanf("%d",&horas);
	
	//Switch
	switch(depto){
		case 1: {
			pago=horas*35.5;
			printf("---------------------------------------------\n");
			printf("Departamento de Sistemas\n");
			break;
		}
		case 2:{
			pago=horas*40.85;
			printf("---------------------------------------------\n");
			printf("Departamento de Produccion\n");
			break;
		}
		case 3:{
			pago=horas*20.14;
			printf("---------------------------------------------\n");
			printf("Departamento de Contabilidad\n");
			break;
		}
		
		default: {
			printf("---------------------------------------------\n");
			printf("No existe ese departamento\n");
			break;
		}
		}

	
	//Impresion de datos
	printf("El trabajador %s\n",nombre);
	printf("Trabajo %d horas\n",horas);
	printf("Ganando $%.2f en total",pago);	
	}