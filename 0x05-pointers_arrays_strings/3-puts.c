#include "main.h"
/**
* _puts - prints a string to stdout
* @str: pointer to the string to print
*/
void _puts(char *str)
{
int i = 0;
while (0 >= 0)
{
if (str[i] == '\0')
{
putchar('\n');
break;
}
putchar(str[i]);
i++;
}
}
