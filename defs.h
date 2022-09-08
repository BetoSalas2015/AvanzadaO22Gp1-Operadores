#include <stdio.h>

//#define macro valor 
#define pausa system("pause")
#define cls system("cls")

#define PR(fmt,val) printf(#val " = %"#fmt" \t", (val))
#define NL putchar('\n')

#define PRINT1(f, x1) PR(f, x1), NL
#define PRINT2(f, x1, x2) PR(f, x1), PRINT1(f, x2)
#define PRINT3(f, x1, x2, x3) PR(f, x1), PRINT2(f, x2, x3)
#define PRINT4(f, x1, x2, x3, x4) PR(f, x1), PRINT3(f, x2, x3, x4)
#define PRINT5(f, x1, x2, x3, x4, x5) PR(f, x1), PRINT4(f, x2, x3, x4, x5)

// Declaraciones Globales (externas)
int Arreglo[15];

struct Persona
{
	char nombre[30];
	int edad;
} Juanito, *ptrJuanito;

char car;
int a, b, c, d;
float e , f, g;
double h;
int *ptr;
