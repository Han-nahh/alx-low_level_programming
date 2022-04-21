#include "main.h"

char *_strcat(char *dest, char *src)
{
	int len;
	char *cp;

	len = _strlen(dest);
	cp = dest + len;
	*(cp - 1) = 32;         /*add the space between strings*/
	while (*src != '\0')
	{
		*(cp) = *src;
		src++;
		cp++;
	}
	return (dest);
}
