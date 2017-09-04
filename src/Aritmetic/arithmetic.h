/*****************************************************
 * FILE NAME *
 * arithmetic.h										 *
 * PURPOSE *
 * Arithmetic header file							 *
 *****************************************************/
#ifndef ARITHMETIC_H
#define ARITHMETIC_H

/* Include Files */
#include "booldef/booldef.h"

/*****************************************************/

/* Definitions and enumerations*/

/*****************************************************/

/* Public Data types */

/*****************************************************/

/* Public method declarations */

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
bool DivisibleBy(int numerator, int denominator);

/*
* Determine if a number is prime
* return: @type boolean, true if number is prime
*		  false if not.
* args:
*		numerator: @type int, number to be evaluated
*/
bool PrimeEvaluation(int number);

/*****************************************************/
#endif
