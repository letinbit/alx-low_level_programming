/*Author is Neway Solomon*/
#include "main.h"
/**
 * print_chessboard - a functionan that prints chessboard
 * @a: pointer
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int outer = 0;
	int inner = 0;

	/*while (outer < 8)*/
	for (outer = 0; outer < 8; outer++)
	{
		/*while (inner < 8)*/
		for (inner = 0; inner < 8; inner++)
		{
			_putchar(a[outer][inner]);
			/*inner++;*/
		}
		_putchar(10);
		/*outer++;*/
	}
}
