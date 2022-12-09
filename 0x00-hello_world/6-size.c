#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	printf("size of a char: %lu byte(s)\n", sizeof(char));
	pritnf("size of an int: %lu byte(s)\n", sizeof(int));
	pritnf("size of a long int: %lu byte(s)\n", sizeof(long int));
	pritnf("size of a long long int: %lu byte(s)\n" sizeof(long long int));
	printf("size of a float: %lu byte(s)\n" sizeof(float));

	return (0);

}
