#include "holberton.h"

/**
 * display_complex_number - Display the complex numbers, followed by a new line.
 * @c: Complex numbers
 */
void display_complex_number(complex c)
{
	if (c.re != 0)
	{
		printf("%.f", c.re);
	}
	if (c.re > 0 && c.im > 0)
	{
		printf(" + ");
	}
	else if (c.re < 0 && c.im < 0)
	{
		printf(" - ");
	}
	if (c.im != 0)
	{
		printf("%.fi", c.im);
	}
	printf("\n");
}
