/*****************************************************
 * FILE NAME *
 * BuzzFizz.h										 *
 * PURPOSE *
 * BuzzFizz header file								 *
 *****************************************************/
#ifndef BUZZFIZZ_H
#define BUZZFIZZ_H

/* Include Files */

/*****************************************************/

/* Definitions and enumerations*/

/*****************************************************/

/* Public Data types */

/*****************************************************/

/* Public method declarations */

/*
 * Evaluate the BuzzFizz conditions, print a different
 * result depending on the trigger, Fizz if divisible 
 * by FIZZ, Buzz if divisible by BUZZ. BuzzFizz if 
 * the number is prime, just print the number if the 
 * otherwise.
 * return: void
 * args:
 *		number: @type int, the number to be evaluated 
 *				by BuzzFizz conditions
 *		fizz: @type int, fizz trigger
 *		buzz: @type int, buzz trigger
 */
void BuzzFizzEvaluation(int number, int fizz, int buzz);

/*
 * Creates a Fibonacci series evaluated by BuzzFizz
 * return: void
 * args:
 *		number: @type int, the size of the Fibonacci
 *				series
 *		fizz: @type int, fizz trigger
 *		buzz: @type int, buzz trigger
 */
void FibonacciBuzzFizz(int number, int fizz, int buzz);

/*****************************************************/
#endif
