/* M4
Jose Alfredo Castillo Ortiz 1949648
Arturo Martinez Perez 1947059 
Paola Hernandez Vazquez 1999061
Yahir Alejandro Gomez Vega 1995203
Orlando Francisco Vazquez Hernandez 1960877
*/
#include <stdio.h>
#include <windows.h>

void promedio_salon();
void promedio_alumno();
void promedio_todosalumnos();
void titulo_principal();
void titulo_1();
void titulo_2();
void titulo_3();
void menu();
void despedida();

int i,j,opcion,volver,while1,while2;
float promedio,suma,x[50][50];

int main (){
	do{
		system("cls");
		titulo_principal();
		menu();
		switch(opcion){
			case 1: system("cls");titulo_1(); promedio_salon();break;
			case 2: titulo_2(); promedio_alumno();break;
			case 3: system("cls");titulo_3(); promedio_todosalumnos();break;
			case 4: printf("\t- Gracias por usar CalificaFIME -\n");
		}
	printf("\n\n1.- Volver al menu\n2.- Cerrar programa: ");
	scanf("%d",&while2);	
	}
	while(while2==1);
}

void titulo_principal(){
	system("color 0A");
	printf("\t _____   ___   _      _____ ______  _____  _____   ___  ______  _____ ___  ___ _____ \n");
	printf("\t/  __ \\ / _ \\ | |    |_   _||  ___||_   _|/  __ \\ / _ \\ |  ___||_   _||  \\/  ||  ___|\n");
	printf("\t| /  \\// /_\\ \\| |      | |  | |_     | |  | /  \\// /_\\ \\| |_     | |  | .  . || |__  \n");
	printf("\t| |    |  _  || |      | |  |  _|    | |  | |    |  _  ||  _|    | |  | |\\/| ||  __| \n");
	printf("\t| \\__/\\| | | || |____ _| |_ | |     _| |_ | \\__/\\| | | || |     _| |_ | |  | || |___ \n");
	printf("\t \\____/\\_| |_/\\_____/ \\___/ \\_|     \\___/  \\____/\\_| |_/\\_|     \\___/ \\_|  |_/\\____/ \n\n");
	printf("\t=======================================================================================\n\n");
}

void titulo_1(){
	system("color 03");
printf(" ____  ____   __   _  _  ____  ____  __  __     ____  ____    ____   __   __     __   __ _  \n");
printf("(  _ \\(  _ \\ /  \\ ( \\/ )(  __)(    \\(  )/  \\   (    \\(  __)  / ___) / _\\ (  )   /  \\ (  ( \\ \n");
printf(" ) __/ )   /(  O )/ \\/ \\ ) _)  ) D ( )((  O )   ) D ( ) _)   \\___ \\/    \\/ (_/\\(  O )/    / \n");
printf("(__)  (__\\_) \\__/ \\_)(_/(____)(____/(__)\\__/   (____/(____)  (____/\\_/\\_/\\____/ \\__/ \\_)__) \n");                                                                                                                              
}

void titulo_2(){
	system("color 0D");
printf(" ____  ____   __   _  _  ____  ____  __  __     ____  ____     __   __    _  _  _  _  __ _   __  \n");
printf("(  _ \\(  _ \\ /  \\ ( \\/ )(  __)(    \\(  )/  \\   (    \\(  __)   / _\\ (  )  / )( \\( \\/ )(  ( \\ /  \\ \n");
printf(" ) __/ )   /(  O )/ \\/ \\ ) _)  ) D ( )((  O )   ) D ( ) _)   /    \\/ (_/\\) \\/ (/ \\/ \\/    /(  O )\n");
printf("(__)  (__\\_) \\__/ \\_)(_/(____)(____/(__)\\__/   (____/(____)  \\_/\\_/\\____/\\____/\\_)(_/\\_)__) \\__/ \n");
}

void titulo_3(){
	system("color 0B");
printf(" ____  ____   __   _  _  ____  ____  __  __     ____  ____     __   __    _  _  _  _  __ _   __   ____  \n");
printf("(  _ \\(  _ \\ /  \\ ( \\/ )(  __)(    \\(  )/  \\   (    \\(  __)   / _\\ (  )  / )( \\( \\/ )(  ( \\ /  \\ / ___) \n");
printf(" ) __/ )   /(  O )/ \\/ \\ ) _)  ) D ( )((  O )   ) D ( ) _)   /    \\/ (_/\\) \\/ (/ \\/ \\/    /(  O )\\___ \\ \n");
printf("(__)  (__\\_) \\__/ \\_)(_/(____)(____/(__)\\__/   (____/(____)  \\_/\\_/\\____/\\____/\\_)(_/\\_)__) \\__/ (____/ \n");
}

void menu(){
	do{
		system("cls");
		titulo_principal();
		printf("\tAsistente de maestro: \n\n");
		printf("\t1.- Promedio de un salon\n");
		printf("\t2.- Promedio de un alumno\n");
		printf("\t3.- Promedio de todos los alumnos\n");
		printf("\t4.- Volver o cerrar programa\n\n");
		printf("\t=======================================================================================\n\n");
		printf("\tSeleccione una opcion: ");
		scanf("%d",&opcion);
		if(opcion<=4){
			system("cls");
		}
		else{
			printf("\nEsa es una opcion invalida, presione 1 para volver: ");
			scanf("%d",&volver);
		}
	}
	while(volver==1);
}

void promedio_salon(){
	int divisor, alumnos, calificaciones;
	suma=0;
	printf("Ingresa cuantos alumnos tienes: ");
	scanf("%d",&alumnos);
	printf("Ingresa cuantas calificaciones pides: ");
	scanf("%d",&calificaciones);
	for(i=1;i<=alumnos;i++){
		for(j=1;j<=calificaciones;j++){
			printf("Calificacion [%d] del alumno [%d]: ",j,i);
			scanf("%f",&x[i][j]);
			suma=suma+x[i][j];
		}
	}
	printf("\n\t \tCalificaciones \n");
	for(i=1;i<=alumnos;i++){
		printf("Alumno[%d]: ",i);
		for(j=1;j<=calificaciones;j++){
			printf("\t %.2f ",x[i][j]);
		}
		printf("\n");
	}
	divisor=alumnos*calificaciones;
	promedio=(suma)/(divisor);
	
	printf("\nLa suma del salon es: %.2f \n",suma);
	printf("\nEl promedio del salon es: %.2f",promedio);
}

void promedio_alumno(){
	int i,matricula,n;
	char nombre [50];
	float x[50],promedio,suma;
	int contador;
	contador=0;
	do{
		
		system("cls");
		contador++;
		titulo_2();
		printf("Cuantas calificaciones pedira: ");
		scanf("%d",&n);
		printf ("Ingresa nombre del alumno: ");
		scanf (" %[^\n]",&nombre);
		printf ("Ingresa la matricula del alumno: ");
		scanf (" %d",&matricula);
		printf("\n-------------------------------\n");
		printf("\nIngrese sus calificaciones \n");
		printf("-------------------------------\n");
		suma=0;
		for(i=1;i<=n;i++){
			printf("Ingrese la calificacion %d: ",i);
			scanf("%f",&x[i]);
			suma=suma+x[i];
		}
		printf("El alumno %s",nombre);
		printf("\ncon matricula: %d y",matricula);
		printf("\nCon calificaciones de: \n");
		for(i=1;i<=n;i++){
			printf("\t\n %.2f ",x[i]);
		}
		
		promedio=suma/n;
		printf("\n\nSumo un total de: %.2f puntos",suma);
		printf("\nObteniendo un promedio de: %.2f",promedio);
		printf("\n\nPromediar otro alumno: 1.- Si 2.- No: ");
		scanf("%d",&while1);
	}
	while(while1==1);
	printf("\nLos alumnos analizados fueron: %d",contador);
}

void promedio_todosalumnos(){
	int alumnos,calificaciones;
	suma=0;
	printf("Ingresa cuantos alumnos tienes: ");
	scanf("%d",&alumnos);
	printf("Ingresa cuantas calificaciones pides: ");
	scanf("%d",&calificaciones);
	printf("Excelente - 100\n");
	printf("Muy bien - 91 a 99\n");
	printf("Bien - 81 a 90\n");
	printf("Regular - 70 a 80\n");
	printf("Reprobado - 0 a 69\n");
	
	for(i=1;i<=alumnos;i++){
		for(j=1;j<=calificaciones;j++){
			printf("Calificacion [%d] del alumno [%d]: ",j,i);
			scanf("%f",&x[i][j]);
		}
	}
		
	printf("\n\t \tCalificaciones \n");
	for(i=1;i<=alumnos;i++){
		printf("Alumno[%d]: ",i);
		for(j=1;j<=calificaciones;j++){
			printf("\t %.2f ",x[i][j]);
		}
		printf("\n");
	}
	
	for(i=1;i<=alumnos;i++){
		for(j=1;j<=calificaciones;j++){
			suma=suma+x[i][j];
		}
		promedio=suma/calificaciones;
		printf("\nPromedio alumno [%d] %.2f",i,promedio);
		
		if(promedio==100){
		printf("\nSituacion: Excelente\n");
		}
		else{
			if((promedio>91)&&(promedio<=99)){
			printf("\nSituacion: Muy bien\n");
			}
			else{
				if((promedio>=81)&&(promedio<=90)){
					printf("\nSituacion: Bien\n");
				}
				else{
					if((promedio>=70)&&(promedio<=80)){
						printf("\nSituacion: Regular\n");
					}
					else{
						printf("\nSituacion: Reprobado\n");
					}
				}
			}
		} 
		suma=0;
	}
}
void despedida(){
	printf("\n\n======= Gracias por usar CALIFICAFIME =======\n\n");
}
