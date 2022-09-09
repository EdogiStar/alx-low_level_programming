#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main block
* Description: Assign a random number to the variable n each time it is executed
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d ", n);
printf(" is ");
if (n > 5)
printf("and is greater than 5 ");
else if (n == 0)
printf("and is 0");
else
printf("and is less than 6 and not 0");
return (0);
}
