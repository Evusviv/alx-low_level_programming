#include <stdio.h>
#include "main.h"
/**
* main - Print alphabet in lowercase followed by a new line
* Return: 0
*/
int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
