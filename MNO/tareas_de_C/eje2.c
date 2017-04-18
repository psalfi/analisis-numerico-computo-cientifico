#include<stdio.h>
main(){
    int i, arreglo[7];
	int arreglo_multidimensional[4][3];
	int numero_renglones, numero_columnas;    

    numero_renglones = sizeof(arreglo_multidimensional)/ sizeof(arreglo_multidimensional[0]);
	numero_columnas = sizeof(arreglo_multidimensional[0])/ sizeof(arreglo_multidimensional[0][0]);

	printf("Tamaño en bytes del arreglo: %ld\n", sizeof(arreglo));
    printf("Tamaño en bytes de la posición 0 de arreglo: %ld\n", sizeof(arreglo[0]));
    printf("Longitud de arreglo: %ld\n", sizeof(arreglo)/sizeof(arreglo[0]));
	
	printf("Total de bytes para arreglo_multidimensional :%ld\n", sizeof(arreglo_multidimensional));
	printf("Total de bytes para arreglo_multidimensional[0]: %ld\n",sizeof(arreglo_multidimensional[0]));
	printf("Total de bytes para arreglo_multidimensional[0][0]: %ld\n", sizeof(arreglo_multidimensional[0][0]));
	printf("Filas del arreglo_multidimensional[0][0]: %d\n", numero_renglones);
	printf("Cols del arreglo_multidimensional[0][0]: %d\n", numero_columnas);

	

}	
