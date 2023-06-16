#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: print lowercase and uppercase letters
 *
 * Return:0 always SUCCESS
*/

int main(void)
{
int lower_letter = 'a';
int upper_letter = 'A';

while (lower_letter <= 'z')
{
putchar(lower_letter);
lower_letter++;
}
while (upper_letter <= 'Z')
{
putchar(upper_letter);
upper_letter++;
}
putchar('\n');
return (0);
}
