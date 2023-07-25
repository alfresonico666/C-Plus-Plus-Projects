//programa que calcula el sueldo de un trabajador
//1949648 JOSE ALFREDO CASTILLO ORTIZ M4
//libresiar
#include<stdio.h>
main()
{//inicio
	//variable 
	char nombre[50];
	int depto,horas;
	int opcion;
	do{
	float pago;
	//entrada de datos
	printf("D E P A R T A M E N T O S \N");
	printf("--------------------------- \n");
	printf("Depto.                       Pago*hora \n");
	printf("1- Sistemas                      35.50 \n");
	printf("1- Produccion                    40.85 \n");
	printf("1- Contabilidad                  20.14 \n");
	printf("--------------------------------------- \n");
	printf("Ingresa el Departamento............:");
	scanf("%d",&depto);
	printf("Ingresa el nombre del empleado....:");
	scanf(" %[^\n]",&nombre);
	printf("Ingresar las horas de trabajo.....:");
	scanf("%d",&horas);
		switch(depto)
		{//inicio del switch
			case 1: pago=horas*35.50;printf("Sistemas \n");break;
			case 2: pago=horas*40.85;printf("Produccion \n");break;
			case 3: pago=horas*20.14;printf("Contabilidad \n");break;
		}//fin del switch
		printf("El empleado %d \n",nombre);
		printf("Horas laboradas %d \n",horas);
		printf("Sueldo final %.2f \n",pago);
		printf("Desea continuar 1.- si 2.- no  \n");
		scanf("%d",&opcion);
	}
	while(opcion==1);
}//fin