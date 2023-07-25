//Jose Alfredo Castillo Ortiz 1949648 M4
#include <stdio.h>
int main () {
	//Declaracion de variables
	int matricula, c1,c2,c3,af,pia;
	char nombre [50];
	float prom,pc1,pc2,pc3,paf,ppia;
	
	//Datos
	printf ("Ingresa nombre del alumno: \n");
	scanf (" %[^\n]",&nombre);
	printf ("Ingresa la matricula del alumno: \n");
	scanf (" %d",&matricula);
	printf("\n-------------------------------\n");
	printf("Ingrese sus calificaciones \n");
	printf("-------------------------------\n");
	printf("Examen 1: ");
	scanf("%d",&c1);
	printf("Examen 2: ");
	scanf("%d",&c2);
	printf("Examen 3: ");
	scanf("%d",&c3);
	printf("Actividades Fundamentales: ");
	scanf("%d",&af);
	printf("PIA: ");
	scanf("%d",&pia);
	printf("\n-------------------------------\n");
	
	//Operaciones
	pc1=c1*0.15;
	pc2=c2*0.10;
	pc3=c3*0.20;
	paf=af*0.40;
	ppia=pia*0.15;
	prom=pc1+pc2+pc3+paf+ppia;
	
	//If
	if(prom==100){
		printf("Excelente\n");
	}
	else{
		if((prom>91)&&(prom<=99)){
			printf("Muy bien\n");
		}
		else{
			if((prom>=81)&&(prom<=90)){
				printf("Bien\n");
			}
			else{
				if((prom>=70)&&(prom<=80)){
					printf("Regular\n");
				}
				else{
					printf("Reprobado\n");
				}
			}
		}
	} 
	
	//Impresiones
	printf("-------------------------------\n");
	printf("El alumno %s \n",nombre);
	printf("con matricula: %d \n",matricula);
	printf("tiene un promedio de %.2f \n",prom);
	printf("-------------------------------\n");

	return 0;
	}
	