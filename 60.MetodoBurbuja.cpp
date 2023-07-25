//Metodo burbuja
//Jose Alfredo Castillo Ortiz 1949648 M4
#include<stdio.h>
main(){
int array[5] = {3,2,4,1,5};
int i,j,aux;

for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		if(array[j]>array[j+1]){
			aux = array[j];
			array[j] = array[j+1];
			array[j+1] = aux;
		}
	}
	
}

//Impreso de forma ascendente
for(i=0;i<5;i++){
		printf("%i ",array[i]);
	}
printf("\n\n");

//Impreso de forma descendente
for(i=4;i>=0;i--){
		printf("%i ",array[i]);
	}
}
