#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>


/*
 * Create an array of n size, i at the start of the function
 * name indicates integer type, f indicates float, c indicates char.
 * Params:
 *        size: the number of elements of the array
 * Return:
 *        returns the address of the array pointing at the first element
*/
float* farraycreate(int size);
int*   iarraycreate(int size);
char*  carraycreate(int size);


/*
 * Create a matrix of n*m size, i at the start of the function
 * name indicates integer type, f indicates float, c indicates char
 * Params:
 *        rows: the number of rows of the matrix
 *        cols: the number of coloumns of the matrix
 * Return:
 *        returns the address of the vector pointing at the first element
*/
float* fmatrixcreate(int rows, int cols);
int*   imatrixcreate(int rows, int cols);
char*  cmatrixcreate(int rows, int cols);


/*
 * Create random value for the array
 * Params:
 *        *vect: the address of the array
 *        size: the size of the vector
*/
void iarrayrng(int *vect, int size);
void carrayrng(char *vect, int size);

/*
 * Create random value for the matrix
 * Params:
 *        **mat: the address of the matrix
 *        rows: the number of rows
 *        cols: the number of cols
*/
void imatrixrng(int **mat, int rows, int cols);
void cmatrixrng(char **mat, int rows, int cols);


void *createstring(char *str)