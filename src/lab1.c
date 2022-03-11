/*
 ============================================================================
 Name        : labs2022.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void printTablero();

char ecuaciones[6][8]={"10+10=20",
					   "25+15=40",
					   "25+05=30",
					   "25+25=50",
					   "        ",
					   "        "}, nums[11]="1234567890" ,operadores[6]="+-*/=", ganador[9]="25+25=50"; //definicion de tableros y arrays

int main(void) {
	printTablero();
	printf("%s\n",nums);
	printf("%s\n",operadores);
	printf("%s\n",ganador);
	return EXIT_SUCCESS;
}

void printTablero(){
	int fila, columna;
	for (fila=0; fila<6; fila++)
	{
	    for(columna=0; columna<8; columna++)
	    {
	         printf("%c ", ecuaciones[fila][columna]);
	    }
	    printf("\n");
	}

}
