//Jose Alfredo Castillo Ortiz 1949648 M4
#include <stdio.h>
int main () {
	//Declaracion de variables
	int zona;
	float km,pago;
	
	//Datos y Menu
	printf("------------------ Z  O  N  A  S ------------------\n");
	printf("Zonas				Tarifas\n");
	printf("1.- Monterrey 				$7.50 \n");
	printf("2.- San Pedro				$16.30 \n");
	printf("3.- San Nicolas				$8.20 \n");
	printf("---------------------------------------------------\n");
	printf("Ingrese su zona: \n");
	scanf("%d",&zona);
	printf("Ingrese la cantidad de km: \n");
	scanf("%f",&km);
	
	//If
	if(km<=10){
		pago=40;
	}
	else{
		
	//Switch
	switch(zona){
		case 1: {
			pago=40+(km*7.5);
			printf("---------------------------------------------\n");
			printf("Zona de Monterrey\n");
			break;
		}
		case 2:{
			pago=40+(km*16.3);
			printf("---------------------------------------------\n");
			printf("Zona de San Pedro\n");
			break;
		}
		case 3:{
			pago=40+(km*8.2);
			printf("---------------------------------------------\n");
			printf("Zona de San Nicolas\n");
			break;
		}
		
		default: {
			printf("---------------------------------------------\n");
			printf("No existe esa zona\n");
			break;
		}
		}
	}
	
	//Impresion de datos
	printf("Para un kilometraje de %.2f\n",km);
	printf("Se cobra un total de $%.2f",pago);	
	}