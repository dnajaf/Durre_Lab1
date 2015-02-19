#include "stdafx.h"
#include<stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>

#include "func.h"

using namespace std;

char file;
int flag = 0;

int mul(int x[10][10], int y[10][10]);
int add(int x[10][10], int y[10][10]);
int sub(int x[10][10], int y[10][10]);

int main()
{
	// Open the file to be read.

	ifstream is("matrices.txt");
	while (is.get(file))
	{
		if (file = ';' && flag == 0)
		{
			row = i; column = j;
			flag++;

		}
	}
	if (flag == 0) // && file = '\n') 
	{
		if (file = '\n')
		{
			i = 0; j++;
		}

		if (isdigit(file))
		{
			a[i][j] = int(file - '0');
			i++;
		}
	}

	if (flag != 0 && file == ';')
	{
		i = 0; j = 0;
	}

	if (file == '\n') { i++; j = 0; }
	if (isdigit(file))
	{
		b[i][j] = int(file - '0');

		j++;
	}

	if (file == ';')
	{
		row2 = i;
		column2 = j - 1;
		counter++;

	}


	printf("\nMultiplication Of Two Matrices : \n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			printf(" %d ", product[i][j]);
		}
		printf("\n");


		printf_s("Sum of entered matrices:\n");

		for (k = 0; k < row; k++)
		{
			for (d = 0; d < column; d++)
				printf("%d", sum[i][j]);
		}

		printf_s("Sum of entered matrices:\n");

		for (k = 0; k < row; k++)
		{
			for (d = 0; d < column; d++)
				printf("%d", diff[i][j]);
		}


	}
}