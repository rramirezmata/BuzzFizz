/*****************************************************
 * FILE NAME *
 * arithmetic.c										 *
 * PURPOSE *
 * Arithmetic operations								 *
 *****************************************************/

/* Include Files */
#include "booldef/booldef.h"

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

	/*
	* Determine if a number is divisible by another
	* If numerator%denominator = 0 returns true
	* else false
	* return: @type boolean, true if number is divisible
	*		  false if not.
	* args:
	*		numerator: @type int, number to be evaluated
	*		denominator: @type int, number by which
	*					 numerator should be divisible
	*/

bool DivisibleBy(int numerator, int  denominator)
{
	return (0 == numerator % denominator);
}

/*
* Determine if a number is prime
* return: @type boolean, true if number is prime
*		  false if not.
* args:
*		numerator: @type int, number to be evaluated
*/
bool PrimeEvaluation(int number)
{
	int index = 0; /* index of evaluation */
	bool is_prime = true; /* result of the evaluation */
	
	/*
	* Starting the index at two, evaluate if the number
	* divisible by the index. Evaluate until reach the 
	* half of the number
	*/
	for(index = 2; index <= (number / 2); index++){
		if(0 == (number % index)){
			is_prime = false; /* set the flag false*/
			break;
		}
	}
	
	/*
	* If the number to be evaluated is one, return false
	*/
	if(1 == number){
		is_prime = false;
	}

	return is_prime;
}

/*****************************************************/
