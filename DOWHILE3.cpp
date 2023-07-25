//programa que calcula el pago de un rastaurante
//1949648 JOSE ALFREDO CASTILLO ORTIZ M4
#include<stdio.h>//standard input output
#include<windows.h>//system("cls").- clear screen
main()//el cuerpo de programa
{//inicio
 //declaracion de variables
 char nombre [50];
 int platillo,cant;
 int opcion;
 do{//inicio do while
 float pago;
 int opcion;//para el do while
 int contador;//contar el numero de repeticiones del programa
 contador=0;
 do{//inicio del do while
 	system("cls");//clear screen
 	contador++;//incrementa en uno
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
 {//platillo entre 1 y 4
	printf("Ingresa el nombre del cliente...:");
	scanf(" %[^\n]",&nombre);
	printf("Ingresa la cantidad de platillos a comprar....:");
	scanf("%d",&cant);
	if(platillo==1)
	{//igual a 1
		pago=cant*35;
		printf("Platillo Cortadillo \n");
	}//igual a 1
	else
	{//no es igual a 1
		if(platillo==2)
		{//es igual a 2
			pago=cant*40;
			printf("Platillo Chiles Rellenos \n");
		}//es igual a 2
		else
		{//no es 2
			if(platillo==3)
			{//es 3
				pago=cant*45;
				printf("Platillo Milanesa de Res");
			}//es 3
			else
			{//no es 3
				pago=cant*42;
				printf("Platillo Milanesa de Pollo \n");
			}//no es 3
		}//no es 2
	}//no es 1
	printf("El cliente %s \n",nombre);
	printf("Cantidad de Platillos Comprados %d \n",cant);
	printf("Pago a Realizar es de %.2f \n",pago);
 }//Platillo entre 1 y 4
 else//de otro modo
 {//no esta entre 1 y 4
 	printf("No existe el platillo \n");
 }//no esta entre 1 y 4
 printf("Deseas Continuar 1.-Si 2.-No \n");
 scanf("%d",&opcion);
}//llave de cierre del do while
while(opcion==1);
printf("El total de analizados es de %d \n",contador);
printf("Desea continuar 1.- si 2.- no  \n");
scanf("%d",&opcion);
}
while(opcion==1);
}