#include <stdio.h>
#include <time.h>

/**
 *main - Entry
 *
 *Discription: nature of number
 *
 *Return: 0 (SUCCESS)
*/

int main(void)
{

int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int last_ligit = n % 10;

if (last_ligit > 5)
printf("%i and is greater than 5\n", last_ligit);

else if (last_ligit == 0)
printf("%i and is 0\n", last_ligit);

else if (last_ligit < 6 && last_ligit !=  0)
printf("%i and is less than 6 and not 0\n", last_ligit);

return (0);
}
