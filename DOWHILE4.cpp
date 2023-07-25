//programa que calcula el promedio del alumno
//1949648 JOSE ALFREDO CASTILLO ORTIZ M4
#include<stdio.h>//standard input output
#include<windows.h>//system("cls").- clear screen
main()//el cuerpo de programa
{//inicio
 //declaracion de variables
 char nombre [50];
 int platillo,cant;
 int opcion;
 do{
 float pago;
 printf("M E N U  D E  C O M I D A S  \n");
 printf("-------------------------------");
 printf("Platillo             Costo   \n");
 printf("1.- Cortadillo        $35.00 \n");
 printf("2.-Chiles Rellenos    $40.00 \n");
 printf("3.- Milanesa de Res   $45.00 \n");
 printf("4.- Milanesa de pollo $42.00 \n");
 printf("---------------------------- \n");
 printf("Selecciona el platillo.........:");
 scanf("%d",&platillo);
 if(platillo>=1 and platillo<=4)
 {
 	printf("Ingresa el nombre.....:");
 	scanf("%[^\n]",nombre);
 	printf("Ingresa la cantidad a comprar.....:");
 	scanf("%d",&cant);
 	switch(platillo)
 	{//Inicio del switch
 		case 1:pago=cant*35;printf("Cortadillo \n");break;
 		case 2:pago=cant*40;printf("Chiles Rellenos \n");break;
 		case 3:pago=cant*45;printf("Milanesa de Res \n");break;
 		case 4:pago=cant*42;printf("Milanesa de Pollo \n");break;
	 }
 }
 printf("El pago es de: %.2f \n",pago);
 printf("Desea continuar 1.- si 2.- no   \n");
 scanf("%d",&opcion);
}
while(opcion==1);
}