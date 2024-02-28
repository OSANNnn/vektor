#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

//checks for the allocation result macro
#define ALLOC_CHECK(x) if (x == NULL) { printf("Error allocating memory.\n\n"); return NULL; }
//newline macro
#define NEW_LN printf("\n")
//error print macro
#define ERROR_MSG(x) printf(x); NEW_LN; return -1;
//macro per unsigned int
#define UINT unsigned int


//DISCLAMER the letter the start of the function name indicates the type, f indicates float, i indicates integer, c indicates char. 

/*
 * Create an array of n size
 * Params:
 *        size: the number of elements of the array
 * Return:
 *        returns the address of the array pointing at the first element
*/
float* farraycreate(const int size);
int*   iarraycreate(const int size);
char*  carraycreate(const int size);

/*
 * Initialize the array setting all elements at zero, the type of data
 * is to be casted when the function is called
 * param:
 *      arr: the array of wich the values are going to get init (need casting)
 *      size: the size of the array
*/
void arrayinit(void *arr, const int size);

/*
 * Initialize the matrix setting all elements at zero, the type of data
 * is to be casted when the function is called
 * param:
 *      mat: the mat of wich the values are going to get init (need casting)
 *      rows: the number of rows of the matrix
 *      cols: the number of columns of matrix
*/
void matrixinit(int **mat, const int rows, const int cols);

/*
 * Create a matrix of n*m size, 
 * Params:
 *        rows: the number of rows of the matrix
 *        cols: the number of columns of the matrix
 * Return:
 *        returns the address of the vector pointing at the first element
*/
float* fmatrixcreate(const int rows, const int cols);
int*   imatrixcreate(const int rows, const int cols);
char*  cmatrixcreate(const int rows, const int cols);


/*
 * Create random value for the array
 * Params:
 *        *vect: the address of the array
 *        size: the size of the vector
*/
void iarrayrng(int *vect, const int size);
void carrayrng(char *vect, const int size);

/*
 * Create random value for the matrix
 * Params:
 *        **mat: the address of the matrix
 *        rows: the number of rows
 *        cols: the number of columns
*/
void imatrixrng(int **mat, const int rows, const int cols);
void cmatrixrng(char **mat, const int rows, const int cols);

/*
 * Create a pointer to a string, a string can be insterted directly as a parameter or
 * an array can be used.
 * Param:
 *       *str: the string pointing at
 * return:
 *       pointer to a string
*/
char *createstring(char *str);

/*
 * Create a filename with .txt extension
 * Param: 
 *      str: string containing the filename with no estension
 * return:
 *      return the address of the string with the filename with the extension
*/
char *filenametxt(char *str);

/*
 * Calculate the sum of the elements of two arrays
 * params:
 *      arr1, arr2. the two arrays wich their sum will be calculated
 * return:
 *      returns the address of the array containing the sum
*/
float* farraysum(float *arr1, float *arr2, const int size);
int*   iarraysum(int *arr1, int *arr2, const int size);

/*
 * Calculate the dot product of two vectors of n size (prodotto scalare)
 * param: 
 *      arr1, arr2: are the two arrays
 *      size: the size of the arrays
 * return:
 *      the result of the dot product
*/
float fdot(float *arr1, float *arr2, const int size);
int   idot(int *arr1, int *arr2, const int size);

/*
 * Calculate the cross product of two vectors of n size (????)
 * param: 
 *      arr1, arr2: are the two arrays
 *      size: the size of the arrays
 * return:
 *      the address fo the array containing the cross product
*/
float* fcross(float *arr1, float *arr2, const int size);
int*   icross(int *arr1, int *arr2, const int size);


/*
 * Calculate the determinant of a quadratic matrix (max 3x3)
 * with the sarrus method
 * 
 * param:
 *      mat: the matrix
 *      size: the size of the matrix
 * return
 *      return the result of the determinant, if the matrix is bigger than 3 retruns -1 with an error
*/
float fsarrus(float **mat, const int size);
int   isarrus(int **mat, const int size);