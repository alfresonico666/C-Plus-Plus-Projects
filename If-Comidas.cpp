//Jose Alfredo Castillo Ortiz 1949648 M4
#include <stdio.h>
int main () {
	//Declaracion de variables
	int comida, cantidad;
	float pago;
	char nombre [50];
	
	//Datos y Menu
	printf("Ingrese el nombre del cliente: \n");
	scanf("%[^\n]",&nombre);
	printf("------------------ M E N U ------------------\n");
	printf("Comida					Precio\n");
	printf("1.- Cortadillo 				$35 \n");
	printf("2.- Chiles rellenos			$40 \n");
	printf("3.- Milanesa de res			$45 \n");
	printf("4.- Milanesa de pollo			$42 \n");
	printf("---------------------------------------------\n");
	printf("Ingrese la comida que desea: \n");
	scanf("%d",&comida);
	printf("Ingrese la cantidad de platos que desea comer: \n");
	scanf("%d",&cantidad);
	
	//If
	if ((comida>=1)&&(comida<=4)){
		if(comida==1){
			pago=cantidad*35;
			printf("\n----------------------------------\n");
			printf("Compro: %d platos de Cortadillo\n",cantidad);
		}
		else{
			if(comida==2){
				pago=cantidad*40;
				printf("\n----------------------------------\n");
				printf("Compro: %d platos de Chiles rellenos\n",cantidad);
			}
			else{
				if(comida==3){
					pago=cantidad*45;
					printf("\n----------------------------------\n");
					printf("Compro: %d Milanesas de Res\n",cantidad);
				}
				else{
					pago=cantidad*42;
					printf("\n----------------------------------\n");
					printf("Compro: %d Milanesas de pollo\n",cantidad);
				}
			}
		}	
	printf("El cliente %s \n",nombre);
	printf("compro %d platillos de comida\n",cantidad);
	printf("pagando un total de %.2f ",pago);
	printf("\n----------------------------------\n");
	}
	else{
		printf("Ese platillo no existe\n");
	}
}