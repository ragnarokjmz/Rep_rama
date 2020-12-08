
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int n1;
	
	printf("Escribe un numero para decidir que si es positivo o negatico: ");
	scanf( "%d", &n1 );
	
	if( n1 < 0 ){
		printf("El numero %d  es negativo \n\n", n1);
	}
	else if( n1 > 0 ){
		printf("El numero %d es positivo  \n\n", n1);
	}
	else{
		printf("El numero %d  es un cero\n\n", n1);
	}  
    
    return (EXIT_SUCCESS);
}

