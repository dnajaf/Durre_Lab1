
#include "stdafx.h"
#include<stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

int row, column, row2, column2;
int counter = 0;
int c, d, a[10][10], b[10][10], product[10][10], i, j, k;

int prod = 0, sum[10][10], diff[10][10];


int mul(int x[10][10], int y[10][10], int row, int row2, int column, int column2)
{


	for (i = 0; i <= row; i++)
	{
		for (j = 0; j <= column; j++) {
			prod = 0;
			for (k = 0; k <= 2; k++) {
				prod = prod + a[i][k] * b[k][j];
			}
			product[i][j] = prod;
		}
	}

	return 0;
}

int add(int x[10][10], int y[10][10], int row, int row2,int column,int column2)
{
	if (row != row2 || column != column2)
	{
		printf("The order of two matrices is not same ");
	}

	else
	{

		for (i = 0; i < row; i++)
			for (j = 0; j < column; j++)
				sum[i][j] = a[i][j] + b[i][j];

		

	}
	return 0;
}

int sub(int x[10][10], int y[10][10], int row, int row2, int column, int column2)
{
	if (row != row2 || column != column2)
	{
		printf("The order of matrices is not same. ");
	}

	else
	{

		for (i = 0; i < row; i++)
			for (j = 0; j < column; j++)
				diff[i][j] = a[i][j] - b[i][j];

		printf_s("\Difference of entered matrices:\n");

		for (k = 0; k < row; k++)
		{
			for (d = 0; d < column; d++)
				printf_s("%d", diff[i][j]);
		}

	}
	return 0;
}