#include "main.h"
#include <stdio.h>
/**
* strlen.c - a funtion that returns the length of a string
* @s: string to evaluate
* Return: the length of the string
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
