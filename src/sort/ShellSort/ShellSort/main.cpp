/*
* Created: 2015-10-26
* Author: Liu Biao
* Function: Shell sort algorithm.
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "ShellSort.h"


int main()
{
	int n; // Array element count.
	int *data; // Pointer to the data array.
	int i;

	printf("Enter element number of the data array:\n");
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("The number can't be <= 0.\n");
		exit(-1);
	}

	// allocate the data array.
	data = (int *)malloc(n * sizeof(int));
	if (NULL == data)
	{
		printf("Allocate the data array failed.\n");
		exit(-1);
	}

	for (i = 0; i < n; ++i)
	{
		printf("Enter element %d:\n", i + 1);
		scanf("%d", &data[i]);
	}

	// Shell sort the array.
	ShellSort(data, n);

	// Print the array shell sorted.
	printf("The array shell sorted:\n");
	for (i = 0; i < n; ++i)
	{
		if (i == n - 1)
		{
			printf("%d\n", data[i]);
		}
		else
		{
			printf("%d,", data[i]);
		}
	}

	free(data); // Free the array memory.

	return 0;
}
