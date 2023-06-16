#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: program print alphabet in lowercase
 *
 * Return: 0 (SUCCESS)
 */

int main(void)
{
char Letter = 'a';

while (Letter <= 'z')
{
putchar(Letter);
Letter++;
}
putchar('\n');
return (0);
}
