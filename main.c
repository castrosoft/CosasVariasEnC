#include <stdio.h>
#include <stdlib.h>

void staticArrayInit();
void automaticArrayInit();


int main(int argc, char *argv[]) {
	
	printf("PRIMERA LLAMADA A LAS FUNCIONES\n");
	staticArrayInit();
	automaticArrayInit();
	printf("SEGUNDA LLAMADA A LAS FUNCIONES\n");
	staticArrayInit();
	automaticArrayInit();
	
	return 0;
}

/*Funcion para demostrar un array local static*/
void staticArrayInit(){
	static int vec[3];
	static int i;
	
	printf("\n-Valores cuando entro en staticArrayInit \n");
	for(i = 0; i < 3; i++){
	printf("array1[%d] = %d ",i, vec[i]);
	}

	printf("\n");
	
	printf("\n-Valores luego de sumarles 5 en staticArrayInit \n");
	for(i = 0; i < 3; i++){
		printf("array1[%d] = %d ",i, vec[i] += 5);
	}
	
	printf("\n");

}

/*Funcion para demostrar un array static automatico*/
void automaticArrayInit(){
	int vec[3] = {1, 2, 3};
	static int i;
	
	printf("\n-Valores cuando entro en automaticArrayInit \n");
	for(i = 0; i < 3; i++){
	printf("array2[%d] = %d ",i, vec[i]);
	}	
	
	printf("\n");

	printf("\n-Valores luego de sumarles 5 en automaticArrayInit \n");
	for(i = 0; i < 3; i++){
	printf("array2[%d] = %d ",i, vec[i] += 5);
	}
	
	printf("\n");

}
