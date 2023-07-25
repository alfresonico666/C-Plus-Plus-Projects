/*Areglos bidimensionales
   Matrices de enteros
*/
//Jose Alfredo Castillo Ortiz 1949648 M4
#include<stdio.h>
main(){
int matriz [2][3] = { {51,52,53} , {54,55,56} };
int filas,columnas;

for(filas=0;filas<2;filas++){
	for(columnas=0;columnas<3;columnas++){
		printf("%i",matriz[filas][columnas]);
		
	}
	printf("\n");
}
}



