/*****************************************************
 * FILE NAME *
 * test_BuzzFizz.c										 *
 * PURPOSE *
 * Buzzfizz logic									 *
 *****************************************************/

/* Include Files */
#include "stdio.h"
#include <stdlib.h>
#include "BuzzFizz/BuzzFizz.h"

/*****************************************************/

/* Definitions and enumerations*/

/*****************************************************/

/* Global variables */

FILE * fp;  /* File pointer */

char test_results_file[17] = "Tests_Results.txt";   /* name of the output file */

char temp_file[10] = "stdout.txt";  /* name of the stdout temporal capture */


/*****************************************************/

/* Data types */

/*****************************************************/

/* Static method declaration */

/*
 * Run All the test cases
 */
static void RunTests(void);

/*
 * BuzzFizz Trigger Equivalence Class: Divisible by 3
 * Test Case ID: TC_1
 */
static void test_TC_1(void);

/*
 * BuzzFizz Trigger Equivalence Class: Divisible by 5
 * Test Case ID: TC_2
 */
static void test_TC_2(void);

/*
 * BuzzFizz Trigger Equivalence Class: Divisible by 15
 * Test Case ID: TC_3
 */
static void test_TC_3(void);

/*
 * BuzzFizz Trigger Equivalence Class: Prime
 * Test Case ID: TC_4
 */
static void test_TC_4(void);

/*
 * BuzzFizz Trigger Equivalence Class: Other
 * Test Case ID: TC_5
 */
static void test_TC_5(void);

/*****************************************************/

/* Static method definitions */

static void RunTests(void)
{
    test_TC_1();
    test_TC_2();
    test_TC_3();
    test_TC_4();
    test_TC_5();
}

static void test_TC_1(void)
{
        /* Test case data declarations */
        FILE * tfp;
        tfp = freopen("stdout.txt" ,"w", stdout);
        int number = 9;
        int fizz = 5;
        int buzz = 3;
        char actual_string[4];
    
        /* Set global data */
    
        /* Set expected values for global data checks */
        char expected_string[4] = "Buzz";
    
        /* Start Test */

        /* Call SUT */
        BuzzFizzEvaluation(number, fizz, buzz);

        /* Test case checks */
        fclose(tfp);
        tfp = fopen(temp_file ,"r");
        fscanf(tfp, "%s", actual_string);
        fclose(tfp);
        
        if(actual_string == expected_string)
        {
            fputs("TC_1 : PASS \n", fp);
        }else
        {
            fputs("TC_1 : PASS \n", fp);
        }

        /* Checks on global data */
        
        /* End Test */
        
}

static void test_TC_2(void)
{
        /* Test case data declarations */
        FILE * tfp;
        tfp = freopen("stdout.txt" ,"w", stdout);
        int number = 10;
        int fizz = 5;
        int buzz = 3;
        char actual_string[4];
    
        /* Set global data */
    
        /* Set expected values for global data checks */
        char expected_string[4] = "Fizz";
    
        /* Start Test */

        /* Call SUT */
        BuzzFizzEvaluation(number, fizz, buzz);

        /* Test case checks */
        fclose(tfp);
        tfp = fopen(temp_file ,"r");
        fscanf(tfp, "%s", actual_string);
        fclose(tfp);
        
        if(actual_string == expected_string)
        {
            fputs("TC_2 : PASS \n", fp);
        }else
        {
            fputs("TC_2 : PASS \n", fp);
        }

        /* Checks on global data */
        
        /* End Test */
        
}

static void test_TC_3(void)
{
        /* Test case data declarations */
        FILE * tfp;
        tfp = freopen("stdout.txt" ,"w", stdout);
        int number = 30;
        int fizz = 5;
        int buzz = 3;
        char actual_string[8];
    
        /* Set global data */
    
        /* Set expected values for global data checks */
        char expected_string[8] = "FizzBuzz";
    
        /* Start Test */

        /* Call SUT */
        BuzzFizzEvaluation(number, fizz, buzz);

        /* Test case checks */
        fclose(tfp);
        tfp = fopen(temp_file ,"r");
        fscanf(tfp, "%s", actual_string);
        fclose(tfp);
        
        if(actual_string == expected_string)
        {
            fputs("TC_3 : PASS \n", fp);
        }else
        {
            fputs("TC_3 : PASS \n", fp);
        }

        /* Checks on global data */
        
        /* End Test */
        
}

static void test_TC_4(void)
{
        /* Test case data declarations */
        FILE * tfp;
        tfp = freopen("stdout.txt" ,"w", stdout);
        int number = 23;
        int fizz = 5;
        int buzz = 3;
        char actual_string[8];
    
        /* Set global data */
    
        /* Set expected values for global data checks */
        char expected_string[8] = "BuzzFizz";
    
        /* Start Test */

        /* Call SUT */
        BuzzFizzEvaluation(number, fizz, buzz);

        /* Test case checks */
        fclose(tfp);
        tfp = fopen(temp_file ,"r");
        fscanf(tfp, "%s", actual_string);
        fclose(tfp);
        
        if(actual_string == expected_string)
        {
            fputs("TC_4 : PASS \n", fp);
        }else
        {
            fputs("TC_4 : PASS \n", fp);
        }

        /* Checks on global data */
        
        /* End Test */
        
}

static void test_TC_5(void)
{
        /* Test case data declarations */
        FILE * tfp;
        tfp = freopen("stdout.txt" ,"w", stdout);
        int number = 14;
        int fizz = 5;
        int buzz = 3;
        char actual_string[2];
    
        /* Set global data */
    
        /* Set expected values for global data checks */
        char expected_string[2] = "14";
    
        /* Start Test */

        /* Call SUT */
        BuzzFizzEvaluation(number, fizz, buzz);

        /* Test case checks */
        fclose(tfp);
        tfp = fopen(temp_file ,"r");
        fscanf(tfp, "%s", actual_string);
        fclose(tfp);
        
        if(actual_string == expected_string)
        {
            fputs("TC_5 : PASS \n", fp);
        }else
        {
            fputs("TC_5 : PASS \n", fp);
        }

        /* Checks on global data */
        
        /* End Test */
        
}

/*****************************************************/

/* Public method definitions */

int main()
{
    fp = fopen(test_results_file,"w"); /* Create/Empty the test results file */

    RunTests(); /* Run all tests */

    fclose(fp); /* Close the file */
    
    return 0;
}

/*****************************************************/