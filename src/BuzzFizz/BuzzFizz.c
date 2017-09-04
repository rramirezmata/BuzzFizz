/*****************************************************
 * FILE NAME *
 * BuzzFizz.c										 *
 * PURPOSE *
 * Buzzfizz logic									 *
 *****************************************************/

/* Include Files */
#include "stdio.h"
#include "booldef/booldef.h"
#include "aritmetic/arithmetic.h"

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

void BuzzFizzEvaluation(int number, int fizz, int buzz)
{
	bool is_divisible = false; /*is the number divisible
								 flag*/

	/*
	* Check if th number is divisible by Fizz
	*/
	if(true == DivisibleBy(number, fizz))
	{
		printf("Fizz"); /* print Fizz to the console*/
		is_divisible = true; /* set the flag to true */
	}
	/*
	* Check if th number is divisible by Buzz
	*/
	if (true == DivisibleBy(number, buzz))
	{
		printf("Buzz"); /* print Buzz to the console*/
		is_divisible = true; /* set the flag to true */
	}
	/*
	* Has the number not been divisible by Buzz or Fizz?
	*/
	if (false == is_divisible)
	{
		/*
		* Check if the number is prime
		*/
		if(true == PrimeEvaluation(number))
		{
			printf("BuzzFizz"); /*print BuzzFizz*/
		}
		/*
		* The number is neither divisible by Buzz or
		* Fizz, nor is a prime number
		*/
		else
		{
			printf("%d", number); /* print the number*/		
		}
	}
	printf("\n"); /*print an end of line*/
}

/*
 * Creates a Fibonacci series evaluated by BuzzFizz
 * return: void
 * args:
 *		number: @type int, the size of the Fibonacci
 *				series
 *		fizz: @type int, fizz trigger
 *		buzz: @type int, buzz trigger
 */
void FibonacciBuzzFizz(int number, int fizz, int buzz)
{
	int index = 0; /* index of sereis */
	int result = 0; /* result of Fibonacci series */
	int first = 0; /* First value of Fibonacci */
	int second = 1; /* Second value of Fibonacci */
	
	/*
	* Creates a Fibonacci series by adding the first 
	* and the second values of the actual series to 
	* the current result.
	*/
	for(index = 1; index <= number; index++){
		
		/* 
		* Is the number one?, If so the result is 
		* the number itself (1+0)
		*/
		if(1 >= index)
		{
			result = index;
		}
		/*
		* Add the first and the second member of the
		* series, and so on.
		*/
		else
		{
			result = first + second;
			first = second;
			second = result;
		}
		
		/* Evaluate the result by BuzzFizz */
		BuzzFizzEvaluation(result, fizz, buzz);

	}
}
/*****************************************************/