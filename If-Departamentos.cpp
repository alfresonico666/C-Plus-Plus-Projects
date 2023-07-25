//Jose Alfredo Castillo Ortiz 1949648 M4
#include <stdio.h>
int main () {
	
	//Declaracion de variables
	int depto,horas;
	char nombre [50];
	float sueldo;
	
	//Ingreso de datos
	printf("Ingrese el nombre del trabajador ");
	scanf("%[^\n]",&nombre);
	printf("\n-----------------------------------------------------------\n ");
	printf("Departamento					$/Hr\n");
	printf("1.- Sistemas					$35.5\n");
	printf("2.- Produccion					$40.85\n");
	printf("3.- Contabilidad				$20.14\n");
	printf("-----------------------------------------------------------\n ");
	printf("Ingrese el departamento: ");
	scanf("%d",&depto);
	printf("Ingrese las horas trabajadas: ");
	scanf("%d",&horas);
	
	//If
	if((depto>=1)&&(depto<=3)){
		if(depto==1){
			sueldo=horas*35.5;
			printf("\nDepartamento de Sistemas\n");
		}
		else{
			if(depto==2){
				sueldo=horas*40.85;
				printf("\nDepartamento de Produccion\n");
			}
			else{
				sueldo=horas*20.14;
				printf("\nDepartamento de Contabilidad\n");
			}
		}
	}
	else{
		printf("\nNo existe ese departamento, ingrese uno valido\n");
	}
	
	//Impresiones
	printf("--------------------------------------\n");
	printf("El trabajador %s \n",nombre);
	printf("con %d horas trabajadas\n",horas);
	printf("gana un total de $%.2f\n",sueldo);
	printf("--------------------------------------\n");
	
}