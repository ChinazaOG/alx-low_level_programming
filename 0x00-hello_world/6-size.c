#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char goat = 0;
	int kettle = 0;
	float monney = 0;
	long int baby = 0;
	long long int cowleg = 0;

	printf("size of a char: %i byte(s)\n", sizeof(goat));
	printf("size of a int: %i byte(s)\n", sizeof(kettle));
	printf("size of a float %i byte(s)\n", sizeof(monney));
	printf("size of a long int: %i byte(s)\n", sizeof(baby));
	printf("size of a long long int: %i byte(s)\n", sizeof(cowleg));
	return (0);
}
