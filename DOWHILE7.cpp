//Programa que nos da el pago de un taxi, dependiendo de la zona
//1949648 JOSE ALFREDO CASTILLO ORTIZ M4
#include<stdio.h>
main()
{//	Inicio
	int km,zona;
	int opcion;
	do{
	float pago;
	printf("Zonas de trabajo y tarifa  \n");
	printf("-------------------------------- \n");
	printf("1- Monterrey          7.5$  \n");
	printf("2- San Pedro          16.3$  \n");
	printf("3- San Nicolas         8.2$  \n");
	printf("-------------------------------- \n");
	printf("Ingrese los kilometros recorridos: ");
	scanf("%d",&km);
	printf("Seleccione la zona: ");
	scanf("%d",&zona);
	printf("---------------------------------- \n");
	printf("Los kilometros recorridos son: %d \n",km);
	if(km<10)
	{//es menor a 10 km
	pago=40;
	}//es menor a 10km
	else 
	{
		switch(zona)
		{//inicio del switch
		case 1: pago= 40 + (km-10)*7.5;printf("Monterrey \n");break;
		case 2: pago= 40 + (km-10)*16.3;printf("San Pedro \n");break;
		case 3: pago= 40 + (km-10)*8.2;printf("San Nicolas \n");break;
		}//final del switch
	}//final del if
	 printf("El pago es de: %.2f \n",pago);
	 printf("Desea continuar 1.- si 2.- no  \n");
	 scanf("%d",&opcion);
}
while(opcion==1);
}//final