/*Areglos bidimensionales
   Matrices de caracteres
*/
//Jose Alfredo Castillo Ortiz 1949648 M4
#include<stdio.h>
main(){
char matriz [2][3] = {{'a','b','c'},{'d','e','f'}};
int i,j;

for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		printf("%c ",matriz[i][j]);
		
	}
	printf("\n");
}
}

