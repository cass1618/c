#include <stdio.h>
#include <string.h>

int findGreatestProduct()
{
	FILE* file;
    char ch;
	char num[1000];
	num[0] = '\0';
	int greatestProduct = 0;


    file = fopen("number.txt", "r");
 
    if (NULL == file) {
        printf("%s\n", "unable to open file.");
    }
 
    do {
        ch = fgetc(file);
		char current[1000];
		current[0] = ch;
		current[1] = '\0';
		strcat(num, current);
    } while (ch != EOF);

	//printf("%s %s", "the string is: ", num);
	for (int i=0; i < 997; i++)
	{
		int product = 1;
		for (int j=0; j<5; j++)
		{
			product *= num[i + j] - '0';
		}
		if (product > greatestProduct) {
			greatestProduct = product;
		}

	}

	printf("\n%s %d\n\n", "The greatest product of 5 consecutive numbers within the number in number.txt is:", greatestProduct);
 
    fclose(file);
    return 0;
}

int main(int argc, char **argv)
{
	findGreatestProduct();
	return 0;
}