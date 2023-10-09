#include "primes.c"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find1001()
{
	int *output = NULL;

	int n = 14000;
	findPrimesLessThan(n, &output);
	
	int answer = output[1000];
	
	printf("\n%s %d.\n\n", "The 1001th prime is", answer);

	free(output);

	return 0;
}

int main(int argc, char **argv)
{
	find1001();
	return 0;
}