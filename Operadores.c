// Sesión 11 - 08/09/2022
#include <stdio.h>		// Para printf() y scanf()
#include <stdlib.h>		// Para system()
#include "defs.h"

void bases()
{
	// conversion entre bases
	a = 179;				// Base 10
	printf("179 en base 10 equivale a %o base 8\n", a);
	printf("179 en base 10 equivale a %X base 16\n", a);

	a = 0263;				// Base 8
	printf("263 en base 8 equivale a %d base 10\n", a);
	printf("263 en base 8 equivale a %X base 16\n", a);

	a = 0xB3;				// Base 16 (Hexadecimal)			
	printf("B3 en base 16 equivale a %d base 10\n", a);
	printf("B3 en base 16 equivale a %o base 8\n", a);

}

void primarios()
{

//  Jerarquía Nivel 1 - Operadores Primarios
	//  Operador llamada a función ( () )
	printf("Toma un numero aleatorio:  %d\n", rand() );

	PRINT1(f, 5 / 9.0 * 80 - 32 );			//  Error
	PRINT1(f, 5 / 9.0 * (80 - 32) );		//  Correcto
	PRINT1(d, (2 + 2) - (3 + 3) );

	// Operador Indice de Arreglo ( [] ) 
	Arreglo[4] = 20;
	PRINT1(d, Arreglo[4]);

	//  Operador Punto (Parte de una estructura) ( . )
	Juanito.edad = 30;
	PRINT1(d, Juanito.edad);

	//  Operador Flecha (Parte de una estructura) ( -> )
	ptrJuanito = &Juanito;
	PRINT1(d, ptrJuanito->edad);
}

int main()
{
	// Jerarquía nivel 2 - Operadores unarios
	//  Operador negación ( ! )
	a = 0;		//  a = falso
	if( a )
		printf("Verdadero\n");
	else
		printf("falso\n");

	PRINT2(d, a, !a);
	PRINT1(d, !!!!!!!!!!!!!!!!a);

	//  Operador Menos unario ( - )
	a = -3; b = 3;
	PRINT2(d, a, b);

	pausa;
	return 0;
}