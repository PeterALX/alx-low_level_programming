#include "main.h"



/**

 * _islower - check if char is lowercase

 * @c: an input character

 * Return: 0

 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)

		return (1);

	return (0);

}
