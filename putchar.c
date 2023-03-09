#include <stdio.h>

void print_number(int n);

int main(void)
{
    
    return 0;
}

void print_number(int n)
{
    if ( n == 0)
        putchar(n);
    
    if (n < 0){
        putchar('-');
        n *=-1;
    }

    if (n / 10)
        print_number(n/10);
    putchar(n % 10 + '0');
}