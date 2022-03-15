#include <stdio.h>
/**
* main -  prints _putchar, followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i, size;
size = sizeof(str) / sizeof(int);
for (i = 0; i < size; i++)
putchar(str[i]);
putchar('\n');
return (0);
}
