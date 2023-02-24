#include <stdio.h>

int _putchar(char c);

int main(void)
{
    char put[] = "_putchar";

    for (int i = 0; i < 8; i++)
    {
        _putchar(put[i]);
    }
        _putchar('\n');
    
    return 0;
}

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}