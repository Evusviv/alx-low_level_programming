#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print all possible different combination of two digits
 * Return: 0
 */
int main(void)
{
int c;
int d = 0;
while (d < 10)
{
c = 0;
}
while (c < 10)
{
putchar('0' + d);
putchar('0' + c);
}
if (c + d != 18)
{
putchar(',');
putchar(' ');
}
c++;
d++;
putchar('\n');
return (0);
}
