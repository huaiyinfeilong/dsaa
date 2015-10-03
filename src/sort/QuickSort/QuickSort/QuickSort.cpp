/*
 * Created: 2015-10-04
 * Author: Liu Biao
 * Function: Quick sort algorithm.
 */

#include <stdio.h>
#include "QuickSort.h"


void QuickSort(int data[], int n)
{
	int i, j, k;

	if (n <= 1)
	{
		return;
	}

	k = data[0];
	i = 0;
	j = n - 1;
	while (i != j)
	{
		while (j > i && data[j] >= k)
			j--;
		if (j > i)
			data[i++] = data[j];
		while (i < j && data[i] <= k)
			i++;
		if (i < j)
			data[j--] = data[i];
	}

	if (i > 0)
		data[i] = k;

	QuickSort(data, i);
	QuickSort(&data[i + 1], n - i - 1);
}
