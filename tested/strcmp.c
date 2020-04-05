#include "jvc.h"
/**
 *_strcmp - funtion compare two string
 *@s1: Punter one
 *@s2: Punter two
 *Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	while(*s1 == *s2)
	{
		s1++;
		s2++;
		/* en s1 se debe buscar el salto de linea */
		if (*s1 == '\n' && *s2 == '\0')
			return (0);
	}
	return (-1);
}

