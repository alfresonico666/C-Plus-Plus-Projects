//Programa que indica el monto a pagar del taximetro con if
//1949648 JOSE ALFREDO CASTILLO ORTIZ M4
#include<stdio.h>


main()
{//inicio
	float km,pago;
	int zona;
	int opcion;
	do{
	printf("Cual es la zona?:\n 1.Mty\n 2.San Pedro\n 3.San Nicolas\n ");
	scanf("%d",&zona);
	printf("Kilometros recorridos: ");
	scanf("%f",&km);
	if(km<=10){	
		printf("El pasaje en la zona %d con kilometros recorridos de %f sera de $40", zona, km);
	} 
	if(zona==1){
		pago = 40 + (km -10) * 7.5;
		printf("El pasaje en la Zona de Monterrey con distancia recorrida de %f km es de $ %f", km,pago);
	}
		if(zona==2){
		pago = 40 + (km -10) * 16.3;
		printf("El pasaje en la Zona de San Pedro con distancia recorrida de %f km es de $ %f", km,pago);
	}
		if(zona==3){
		pago = 40 + (km -10) * 8.2;
		printf("El pasaje en la Zona de San Nicolas con distancia recorrida de %f km es de $ %f", km,pago);
	}
	printf("Los kilometros recorridos son: \n",km);
	printf("Desea continuar 1.- si 2.- no  \n");
	scanf("%d",&opcion);
}
while(opcion==1);
}//final