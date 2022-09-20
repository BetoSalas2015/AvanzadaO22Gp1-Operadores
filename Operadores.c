// Sesión 15 - 20/09/2022
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
void aditivos()
{
	//  Jerarquía nivel 4 - Aditivos
	//  Operador suma  ( + ) - Binaria
	a = 20; b = 15;
	PRINT1(d, a + b);

	//  Operador resta  ( - ) - Binaria
	a = 20; b = 15;
	PRINT1(d, a - b);
}
void desplazamiento()
{
	// Jerarquía nivel 5 - Operadores de desplazamiento
	// Operador desplazamiento a la izquierda ( << )
	a = 54;
	PRINT2(d, a, a << 1);
	PRINT2(d, a, a << 2);
	PRINT2(d, a, a << 3);

	a = 432;
	PRINT2(d, a, a >> 1);
	PRINT2(d, a, a >> 2);
	PRINT2(d, a, a >> 3);
}
void relacionales()
{
	// Jerarquía nivel 6 - Operadores Relacionales
	// OPerador Mayor que ( > )
	a = 20; b = 30;
	PRINT3(d, a , b, a > b);
	// Operador Mayor o igual que ( >= )
	PRINT3(d, a , b, a >= b);
	// Operador menor que ( < )
	PRINT3(d, a , b, a < b);
	// Operador Menor o igual que ( <= )
	PRINT3(d, a , b, a <= b);
}
void igualdad()
{
	// Jerarquía nivel 7 - Operadores de Igualdad
	// Operdor igual a ( == )
	a = 20; b = 30;
	PRINT3(d, a, b, a == b);

	// Operdor diferente de o No igual que ( != )
	a = 20; b = 30;
	PRINT3(d, a, b, a != b);
}
void de_bits()
{
	// Operadores de Bits
	// Jerarquía nivel 8
	// Operador  AND de Bits ( & ) - Binario
	a = 53; b = 39;
	PRINT3(d, a, b, a & b);

	// Jerarquía nivel 9
	// Operador OR de Bits ( | )
	PRINT3(d, a, b, a | b);

		// Jerarquía nivel 10
	// Operador OR de Bits ( | )
	PRINT3(d, a, b, a ^ b);
}
void logicos()
{
	// Operadores lógicos
	// Jerarquía nivel 11
	// Operador  AND lógico ( && ) 
	a = 53; b = 0;
	PRINT3(d, a, b, a && b);

	// Jerarquía nivel 12
	// Operador OR lógico ( || )
	PRINT3(d, a, b, a || b);
}
void condicional()
{
	// Jerarquía Nivel 13 - Operadores condicional o ternario ( ? : )
	printf("Dame 2 numeros separados por coma: ");
	scanf("%d,%d", &a, &b);
	( a < b ) ? PRINT1(d, a) : PRINT1(d, b);
	( a &&	 b ) ? PRINT1(d, a) : PRINT1(d, b);
}
void asignación()
{
// Jerarquía nivel 14 - Operadores de Asignación
	//  Operador asignación Simple ( = )
	a = 20;
	b = 30;		// Asignación explicita 
	a++;		// Asigación implícita
	a = b = c = d = 50;	//  Asignación multiple
	PRINT4(d, a, b, c, d);

	// Operadores de asignación compuesta  (  varios ) 
	a = 20; b = 30;
	PRINT1(d, a += b);			// Suma Compuesta
	PRINT2(d, a, b);

	a = 20; b = 30;
	PRINT1(d, a -= b);			// Resta Compuesta
	PRINT2(d, a, b);

	a = 20; b = 30;
	PRINT1(d, a *= b);			// Multiplicación Compuesta
	PRINT2(d, a, b);

	a = 20; b = 30;
	PRINT1(d, a /= b);			// División Compuesta
	PRINT2(d, a, b);
	
	a = 20; b = 30;
	PRINT1(d, a %= b);			// Módulo Compuesto
	PRINT2(d, a, b);

	a = 20; b = 3;
	PRINT1(d, a >>= b);			// Desplazamiento a la derecha Compuesto
	PRINT2(d, a, b);

	a = 20; b = 3;
	PRINT1(d, a <<= b);			// Desplazamiento a la izquierda Compuesto
	PRINT2(d, a, b);

	a = 20; b = 30;
	PRINT1(d, a &= b);			// AND de Bits Compuesto
	PRINT2(d, a, b);

	a = 20; b = 30;
	PRINT1(d, a |= b);			// OR de Bits Compuesto
	PRINT2(d, a, b);

	a = 20; b = 30;
	PRINT1(d, a ^= b);			// XOR de Bits Compuesta
	PRINT2(d, a, b);
}
void coma()
{
	// Jerarquía nivel 15 - Operador Coma ( , )
	int x, y, z;
	a = 30, b = 20;
	PRINT2(d, a, b);

}

int main()
{
	//  Ejercicios operadores
	a = 3; b = 0; c = 1; d = 5; 
	PRINT1(d, !!5 < a++ );
	PRINT4(d, a, b, c, d);

	a = 3; b = 0; c = 1; d = 5; 
	PRINT1(d, !a++ == !b-- );
	PRINT4(d, a, b, c, d);

	a = 3; b = 0; c = 1; d = 5; 
	PRINT1(d, !a | b++ );
	PRINT4(d, a, b, c, d);

	pausa;
	return 0;
}