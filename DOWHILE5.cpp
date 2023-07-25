//programa para calcular el salario de un trabajador
//estructura selectiva if else
//1949648 JOSE ALFREDO CASTILLO ORTIZ M4
//librerias
#include<stdio.h>
main()
{//inicio
    //declaracion de variables
    char nombre[50];
    int departamento,cant;
    int opcion;
    do{
    float pago;
    printf("T R A B A J O S \n");
    printf("---------------------------- \n");
    printf("Departamentos     	   Costo \n");
    printf("1.-Sistemas        $35.50 \n");
    printf("2.-Produccion      $40.85 \n");
    printf("3.-Contabilidad    $20.14 \n");
    printf("---------------------------- \n");
    printf("Seleccione su Departamento: ");
    scanf("%d",&departamento);
    if(departamento>=1 and departamento<=3)
    {//categoria entre 1 y 3
        printf("Ingresa el nombre del trabajador: ");
        scanf(" %[^\n]",&nombre);
        printf("Ingresa la cantidad de horas trabajadas: ");
        scanf("%d",&cant);
        if(departamento==1)
        {//igual a 1
            pago=cant*35.50;
            printf("Sistemas \n");
	    }//igual a 1
        else
        {//no es igual a 1
            if(departamento==2)
		    {//igual a 2
		        pago=cant*40.85;
		        printf("Produccion \n");
			}//igual a 2
			else
            {//no es igual a 2
		        pago=cant*20.14;
		        printf("Contabilidad \n");
			}//no es igual a 2
	    }//no es igual a 1
	printf("El trabajador %s \n",nombre);
	printf("Cantidad de horas trabajadas %d \n",cant);  
	printf("El sueldo es de %.2f \n",pago);
    }//categoria entre 1 y 3
	else//otro modo
    {//no esta entre 1 y 3
        printf("No existe la categoria \n");
    }//no esta en la categoria entre 1 y 3
    printf("Desea continuar 1.- si 2.- no  \n");
    scanf("%d",&opcion);
}
while(opcion==1);
}//fin