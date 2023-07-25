/*7. Hacer una matriz de tipo entera preguntandoles 
al ususario el numero de filas y el numero de columnas, 
rellenar la matriz y luego mostrandola en pantalla*/
//Jose Alfredo Castillo Ortiz 1949648 M4	
#include<stdio.h>

main(){
	int matriz[50][50],filas,columnas,i,j;
	printf("Digite el numero de filas:  ");
	scanf("%i",&filas);
	printf("Digite el numero de columnas:   ");
	scanf("%i",&columnas);
	
	printf("\n\n");
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Digite un numero matriz[%i][%i]:  ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}
}


