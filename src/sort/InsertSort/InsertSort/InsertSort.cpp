/*
 * Created: 2015-10-04
 * Author: Liu Biao
 * Function: Insert sort algorithm.
 */

#include "InsertSort.h"

void InsertSort(int data[], int n)
{
	int i, j, t;

	if (n <= 0)
	{
		return;
	}

	for (i = 1; i < n; i++)
	{
		t = data[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (data[j] <= t)
			{
				break;
			}
			else
			{
				data[j + 1] = data[j];
			}
		}
		data[j + 1] = t;
	}
}
