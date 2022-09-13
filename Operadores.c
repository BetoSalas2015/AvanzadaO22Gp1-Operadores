// Sesión 13 - 13/09/2022
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

void unarios()
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

	//  Operador Menos unario ( - ) y Mas unario ( + ) - unaria
	a = -3; b = +3;
	PRINT2(d, a, b);

	// operador Complemento a 1 ( ~ ) - Tilde
	a = 20;
	PRINT2(d, a, ~a);

	// Operadores Incremento ( ++ ) y Decremento ( -- )
	a = 20;
	a++;
	PRINT1(d, a);
	a = 20;
	++a;
	PRINT1(d, a);
	a = 20;
	a--;
	PRINT1(d, a);
	a = 20;
	PRINT2(d, a++, a);
	a = 20;
	PRINT2(d, ++a, a);

	a = 20; b = 10;
	PRINT1(d, a++ + b );
	PRINT2(d, a, b);
	a = 20; b = 10;
	PRINT1(d, a++ + ++b );
	PRINT2(d, a, b);

	a = 5; b = 8; c = 0;
	d = a++ + b-- + !c;
	PRINT1(d, d);
	PRINT4(d, a, b, c, d);

	// Operador tamaño de ( sizeof ) 
	printf("El tipo char me ocupa %d bytes de almacenamiento\n", sizeof(char) );
	printf("El tipo int me ocupa %d bytes de almacenamiento\n", sizeof(int) );
	printf("El tipo float me ocupa %d bytes de almacenamiento\n", sizeof(float) );
	printf("El tipo double me ocupa %d bytes de almacenamiento\n", sizeof(double) );
	printf("El tipo long me ocupa %d bytes de almacenamiento\n", sizeof(long int) );
	printf("El tipo struct Persona me ocupa %d bytes de almacenamiento\n", sizeof(struct Persona) );
	printf("La variable Juanito me ocupa %d bytes de almacenamiento\n", sizeof(Juanito) );
	printf("El arreglo Arreglo me ocupa %d bytes de almacenamiento\n", sizeof(Arreglo) );
	printf("El apuntador ptr me ocupa %d bytes de almacenamiento\n", sizeof(ptr) );

	//  Operador Cast  ( (tipo dato) ) - Conversión entre tipos de datos
	car = 75;
	PRINT1(c, car);
	PRINT1(d, car);

	//  Promoción de tipos 
	//  char -> int -> float -> double
	a = car;			// char -> int
	f = a;				// int -> float
	h = f;				// float -> double
	g = h;				// float <- double (degradación de tipos)

	//  tipo A <- ( tipo A ) <- Tipo B
	a = ( int ) car;
	f = ( float ) a;

	// Operador Dirección ( & ) - unario
	ptrJuanito = &Juanito;		// Guardamos la *dirección* de memoria de Juanito
	PRINT2(p, &Juanito, ptrJuanito);

	// Operador Indirección ( contenido de... ) - ( * ) - Unaria
	a = 20;
	ptr = &a;		//  Creando un alias ( apodo ) 
	PRINT1(d, a);
	*ptr = 30;		//  Cambiando el valor de a via su alias ptr
	PRINT1(d, a);
	
}
void multiplicativos()
{
	//  Jerarquía Nivel 3 - Operadores Multiplicativos
	//  Operador Multiplicación ( * ) - Binario
	a = 20; b = 15; f = 15.0;
	PRINT1(d, a * b);

	//  Operador división ( / ) 
	PRINT1(d, a / b);    //  División entera: entero / entero = entero
	PRINT1(f, (float) a / b);		// Division flotante
	PRINT1(f,  a / (float) b);
	PRINT1(f, (float) a / (float) b);
	PRINT1(f, a / f);

	//  Operador Módulo o residuo de la división  ( % ) 
	PRINT1(d, a % b);
}
int main()
{
	//  Jerarquía nivel 4 - Aditivos
	//  Operador suma  ( + ) - Binaria
	a = 20; b = 15;
	PRINT1(d, a + b);

	//  Operador resta  ( - ) - Binaria
	a = 20; b = 15;
	PRINT1(d, a - b);

	pausa;
	return 0;
}