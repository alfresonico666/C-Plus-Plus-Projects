//Jose Alfredo Castillo Ortiz 1949648 M4
#include <stdio.h>
int main () {
	
	//Declaracion de variables
	int compra;
	char nombre [50];
	float total, desc;
	
	//Ingreso de datos
	printf("Ingrese el nombre del cliente: \n");
	scanf("%[^\n]",&nombre);
	printf("Ingrese el total de su compra: \n");
	scanf("%d",&compra);
	
	//If
	if(compra<1000){
		desc=0;
		printf("\n------------------------------------\n");
		printf("No aplica descuento\n");
	}
	else{
		if((compra>=1000)&&(compra<3500)){
			desc= compra*0.07;
			printf("\n------------------------------------\n");
			printf("Descuento del 7\n");
		}
		else{
			desc=compra*0.12;
			printf("\n------------------------------------\n");
			printf("Descuento del 12\n");
		}
	}
	total=compra-desc;
	
	//Impresiones
	printf("El cliente %s\n",nombre);
	printf("que realizo una compra de $%d\n",compra);
	printf("se le desconto -$%.2f\n",desc);
	printf("pagando un total de $%.2f\n",total);
}