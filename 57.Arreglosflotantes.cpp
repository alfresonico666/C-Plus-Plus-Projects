/*Areglos bidimensionales
   Matrices de flotantes
*/
//Jose Alfredo Castillo Ortiz 1949648 M4
#include<stdio.h>
main(){
float matriz [2][3];
int i,j;

for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		printf("Digite un numero matriz[%i][%i]:  ",i+1,j+1);
		scanf("%f",&matriz[i][j]);
	}
	
}
for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		printf("%.2f ",matriz[i][j]);
	}
	printf("\n");
}
}
