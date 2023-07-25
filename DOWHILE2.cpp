//Programa que Calcula el pago a una empresa y su descuento
//1949648 JOSE ALFREDO CASTILLO ORTIZ M4
#include<stdio.h>
main()
{//Inicio
	char empresa[50];
	int monto,cliente;
	int opcion;
	do{//inicio do while
	float pago,descuento;
	printf("Descuentos en el monto de Compra de PATITO \n");
	printf("----------------------------------- \n");
	printf("Menor de 1000&    No hay descuento \n");
	printf("Mayor o igual 1000, pero menor a 3500   7 porciento de descuento \n");
	printf("Mayor o igual a 3500   12 porciento de descuento \n");
	printf("----------------------------------- \n");
	printf("Ingrese el monto: ");
	scanf("%d",&monto);
	printf("Ingrese el nombre del Cliente: ");
	scanf("%d",&cliente);
	if(monto<1000)
	{//menor a 1000
	pago=monto;
	printf("No tiene descuento");
	}//es menor a 1000
	else
	{
		if(monto>=1000 and monto<3500)
		{//igual o mayor a 1000, pero menor a 3500
			descuento=monto*.07;
			pago=monto-descuento;
			printf("Tiene un descuento del 7 portciento \n");
		}//menor a 3500
		else
		{//mayor o igual a 3500
		descuento=monto*.12;
		pago=monto-descuento;
		printf("Tiene un descuento del 12 porciento  \n");
		}//mayor a 3500
	}
	printf("El pago es de: %.2f \n",pago);
	printf("Desea continuar 1.- si 2.- no \n");
	scanf("%d",&opcion);
}
while(opcion==1);
}