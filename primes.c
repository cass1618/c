#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findPrimesLessThan(int n, int **output)
{	
	int numList[n];

	for (int i=0; i < n; i++)
	{
		numList[i] = i + 1;
	}

	// 1 is not prime so set to 0
	numList[0] = 0;
	// the last k that will be checked is first int < sqrt of n
	int lastK = (int) sqrt((double) n);
	
	for (int k=2; k <= lastK; k++)
	{
		//check all numbers not set to 0 if divisible by k
		for (int i=k+1; i < n; i++)
		{
			if (i != 0)
			{
				if (i % k == 0)
				{
					numList[i-1] = 0;
				}
			}
		}
	}

	int count = 0;
	for (int i=1; i < n-1; i++)
	{
		if (numList[i] != 0)
		{
			count ++;
		}
	}

	// create an array in the output pointer to hold all the primes
	*output = (int*)malloc(count * sizeof(int));

	int j = 0;
	for (int i=1; i < n-1; i++)
	{
		if (numList[i] != 0)
		{
			(*output)[j] = numList[i];
			j++;
		}
	}

	return count;

}

void getUserInput()
{
	int userNum;
	int *output = NULL; 

	printf("\n%s", "Enter an integer: ");
	scanf("%d", &userNum);

	int result = findPrimesLessThan(userNum, &output);
	printf("\n%s %d %s %d.\n", "The number of primes less than", userNum, "is", result);
	
	printf("\n%s %d\n", "Here are all of the primes less than", userNum);
	for (int i=0; i < result; i++)
	{
		printf("%d\n", output[i]);
	}
	printf("%s", "\n");

	free(output);
}
