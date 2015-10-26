/*
 * Created: 2015-10-04
 * Author: Liu Biao
 * Function: Shell sort algorithm.
 */

#include <stdio.h>
#include "ShellSort.h"



void Swap(int *a, int *b)
{
	if (a == NULL || b == NULL)
	{
		return;
	}

	int t = *a;
	*a = *b;
	*b = t;
}


void ShellSort(int data[], int n)
{
	int i, j;

	for (int i = n / 2; i >= 1; i /= 2)
	{
		for (int j = i; j < n; j++)
		{
			if (data[j] < data[j - i])
			{
				Swap(&data[j - i], &data[j]);
			}
		}
	}
}
