#include<stdio.h>
main(){
	int *p,c;
	double a1;
	double *p2 = &a1;
    printf("Total de bytes para apuntador int: %ld\n", sizeof(p));
    printf("Total de bytes para variable: %ld\n", sizeof(c));
    printf("Address para variable con &: %p\n", &c);
	printf("Address para variable con apuntador: %p\n", p);
	printf("Total de bytes para apuntador double: %ld\n", sizeof(p2));
	c=10;
	p=&c;
    printf("1. Inicializar SIEMPRE los apuntadores: p=&c\n");
	printf("2. Luego podemos usar *p=&c: %d\n", *p);
	c = -5;
	printf("2. Luego podemos usar *p=&c: %d\n", *p);
	printf("------------------------------------\n");
	int a=-1, b=4, arreglo[5];
	p = &b;  // p apunta a la direccion de b
	a = *p;  // a es igual al valor donde apunta p que es 4
	*p= -321; // *p cambia el valor de b a -321 
	arreglo[0] = -2;
	p = &arreglo[0]; // p apunta a la direccion donde esta almacenado -2

	printf("Valor de a: %d\n", a); 
	printf("Valor de b: %d\n", b);
	printf("Valor de arreglo[0]: %d\n", arreglo[0]);
	printf("Valor de *p: %d\n", *p);
	printf("------------------------------------\n");
	printf("Valor de Base de Address de un arreglo es solo con el nombre: %p\n", arreglo);
	printf("Valor de Base de Address de un arreglo con posicion 0: %p\n", &arreglo[0]);
	printf("------------------------------------\n");
	
	int arreglo2[5];
	*arreglo2 = 8;
	printf("arreglo2[0]: %d\n", arreglo2[0]);

	printf("-----------------------------------------\n");
	printf("Recorro vector por direcciones de memoria\n");
	printf("------------------------------------------\n");

    int arreglo3[5];
    int i;
    
    for(i=0;i<sizeof(arreglo3)/sizeof(arreglo3[0]);i++)
        printf("posición %d, memoria: %p\n", i, arreglo3+i);

	printf("-----------------------------------------\n");
	printf("Recorro vector por el contenido en celdas\n");
	printf("------------------------------------------\n");
    
    int arreglo4[4] = {-3, 5, 7, 8};

    for(i=0;i<sizeof(arreglo4)/sizeof(arreglo4[0]);i++)
        printf("arreglo4[%d]=%d\n", i,arreglo4[i]);
    printf("-----------------\n");
    for(i=0;i<sizeof(arreglo4)/sizeof(arreglo4[0]);i++)
        printf("arreglo4[%d]=%d\n", i,*(arreglo4 + i));
}
