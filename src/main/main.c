/*****************************************************
 * FILE NAME *
 * main.c											 *
 * PURPOSE *
 * This file is the main entry, runs the program     *
 *****************************************************/

/* Include Files */
#include "stdio.h"
#include "stdlib.h"
#include "main_config.h"
#include "BuzzFizz/BuzzFizz.h"

/*****************************************************/

/* Definitions and enumerations*/

/*****************************************************/

/* Global variables */

/*****************************************************/

/* Data types */

/*****************************************************/

/* Static method declaration */

/*****************************************************/

/* Static method definitions */

/*****************************************************/

/* Public method definitions */

/*****************************************************/

/*
 * Main entry, runs the program.
 * return: int type, returns 0 if exits correclty.
 */
int main(int argc, char *argv[])
{
	if(2 == argc)
	{

		int number = atoi(argv[1]);
		/*
		* Print a BuzzFizz Fibonacci series of size NUMBER
		*/
		FibonacciBuzzFizz(number, FIZZ, BUZZ); 
	}
	else if(2 < argc)
	{
		printf("Too many arguments!\n");
	}else
	{
		printf("No arguments!, please provide a number\n");
	}

	return 0;
}