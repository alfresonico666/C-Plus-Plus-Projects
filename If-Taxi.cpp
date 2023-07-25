//Jose Alfredo Castillo Ortiz 1949648 M4
#include <stdio.h>
int main () {
	
	//Declaracion de variables
	int zona;
	float km, pago;
	
	//Ingreso de datos
	printf("Ingrese el kilometraje: \n");
	scanf("%f",&km);
	printf("------------------ Z O N A S ------------------\n");
	printf("Zona					Tarifa\n");
	printf("1.- Monterrey 				$7.50 \n");
	printf("2.- San Pedro				$16.30 \n");
	printf("3.- San Nicolas				$8.20 \n");
	printf("-----------------------------------------------\n");
	printf("Ingrese la zona: \n");
	scanf("%d",&zona);
	
	//If
	if(km<=10){
		pago=40;
	}
	else{
		if ((zona>=1)&&(zona<=3)){
			if(zona==1){
				pago=km*7.5;
				printf("-----------------------------------------------\n");
				printf("Zona de Monterrey\n");
			}
			else{
				if(zona==2){
					pago=km*16.3;
					printf("-----------------------------------------------\n");
					printf("Zona de San Pedro\n");
				}
				else{
					pago=km*8.2;
					printf("-----------------------------------------------\n");
					printf("Zona de San Nicolas\n");
				}
			}
		}
		else{
		printf("-----------------------------------------------\n");
		printf("No existe esa zona\n");
		printf("-----------------------------------------------\n");
		}

	}
	//Impresiones
	printf("Para un kilometraje de %.2f\n",km);
	printf("se cobran $%.2f en dicha zona",pago);
	}