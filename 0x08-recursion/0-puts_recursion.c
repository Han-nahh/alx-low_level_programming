#include "main.h"

/*Prints out a string followed by a new line*/

void _puts_recursion(char *s){
	if(*s=='\o'){
		_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s++);
		
}