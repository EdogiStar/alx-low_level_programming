#include "main.h"
#include <string.h>
/**
* main - Print _putchar followed by a new line.
* Description: You are not allowed to include standard libraries.
* Return: 0
*/
int main(void)
{
char str[] = "_putchar";
int ch;

for (ch = 0; ch < 8; ++ch)
_putchar(str[ch]);
_putchar('\n');

return (0);
}
