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
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len += 1;
		s = s + 1;
	}

	return (len);
}
