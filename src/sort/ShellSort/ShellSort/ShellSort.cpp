/*
 * Created: 2015-10-04
 * Author: Liu Biao
 * Function: Shell sort algorithm.
 */

#include <stdio.h>
#include "ShellSort.h"


void ShellSort(int data[], int n)
{
	int g, i, j, k;

	for (g = n / 2; g > 0; g /= 2)
	{
		for (i = 0; i < g; i++)
		{
			for (int j = i + g; j < n; j += g)
			{
				int t = data[j];
				for (k = j; k >= g && data[k] < data[k - g]; k -= g)
				{
					data[k] = data[k - g];
				}
				data[k] = t;
			}
		}
	}
}
