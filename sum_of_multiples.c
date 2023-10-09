#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("%s\n", "Incorrect number of arguments. Enter ./find_sum and then a number eg ./find_sum 123");
		return 1;
	}

	int num = atoi(argv[1]);

	int total = 0;
    for (int i=1; i<num; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            total += i;
        }
    }
	printf("\n%s %d %s %d.\n\n", "The sum of all multiples of 3 and 5 less than", num, "is", total);
	return total;
}