//programa que calcula el promedio del alumno
//1949648 JOSE ALFREDO CASTILLO ORTIZ M4
#include<stdio.h>//standard input output
main()//el cuerpo de programa
{//incio
     //declaracion de variable
     int mat,c1,c2; //int. - indicando que es una variable entera
     int opcion;//para el do while
     do{//inicio do while
     char nombre[50];//char. - variables tipo caracter
     float prom;//variables tipo flotante
     //entrada de datos
     printf("Ingresa la matricula del alumno....");
     //printf. -imprime un mensaje en pantalla
     scanf("%d",&mat);
     //scanf. -almacena variables
     //%d. -indica que la variable es entera
     //&. -permite que se procese el valor de la variable
     printf("Ingresa el nombre del alumno...");
     scanf("%d",&nombre);
     // %[^\n]. -permite almacenar una cadena de caracters
     // con espacio despues de las primeras comillas dobles
     //dejar un espacio en blanco
     printf("Ingresa la primer calificacion....");
     scanf("%d",&c1);
     // %f. -indica que la variable es flotante
     printf("Ingresa la segunda calificacion...");
     scanf("%d",&c2);
     prom=(c1+c2)/2;
     //impresion
     printf("El alumno con matricula %d \n",mat);
     // \n. -salto de linea
     printf("Se llama %s \n",nombre);
     // %s. -imprime una variable de tipo caracter
     printf("Tiene promdeio de %.2f \n", prom);
     if(prom==100) //estructura selectiva if
     { //Es igual a 100
      printf("Excelente \n");
	 } //igual a 100
	 else
	 {//no es igual a 100
			if(prom>=91 and prom<=99);
	   {// esta entre 91 a 99
	       printf("Muy bien \n");
	   }//entre 91 a 99
	   {//No esta entre 91 a 99
	    	if(prom>=81 and prom<=90);
	       {//entre 81 a 90
	       printf("Bien \n");
		   }//entre 81 a 90
		   {//no esta entre 81 a 90
		   if(prom>=70 and prom<=80);
		   {//entre 70y80
		   printf("Regular \n");
		   }//entre 70y80
		   }//es menor a 70
		   printf("Reprobado \n");
	   }
	 }//no cumple
     printf("Desea continuar 1.-Si 2.-No \n");
     scanf("%d",&opcion);
 }//llave cierre del do while
 while(opcion==1);
}//fin