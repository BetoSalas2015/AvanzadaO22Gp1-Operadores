#include <stdio.h>		// Para printf() y scanf()
#include <stdlib.h>		// Para system()

//#define macro valor 
#define pausa system("pause")
#define cls system("cls")

#define PR(fmt,val) printf(#val " = %"#fmt" \t", (val))
#define NL putchar('\n')

int main()
{
	int a = 17;
	PR(d,5 * 5); NL;
	pausa;
	return 0;
}