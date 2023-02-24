#include <ctype.h>
#include <stdio.h>

int _islower(int c);
int main(void)
{
    int c;
   c = _islower('C');
   putchar(c + '0');
    return 0;
}

int _islower(int c)
{
    if (islower(c))

        return 1;
    else 
        
        return 0;
    
}