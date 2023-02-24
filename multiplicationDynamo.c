#include <stdio.h>

void print_times_table(int n);

int main (void)
{

    // print_times_table(3);
    // putchar('\n');
    print_times_table(5);
    putchar('\n');
    // print_times_table(98);
    // putchar('\n');
    // print_times_table(12); 
    return 0;
}

void print_times_table(int n)
{
    int a, b, x, mul, chk;
    for (a = 0; a <= n; a++)
    {
        for (b = 0, x = 1; b <= n; b++, x++)
        {
            mul = a * b;
            // chk = a * x;

            if (chk > n && b != n)
            printf("%-d,", mul);
            else if (b == n)
            printf("%-d ", mul);
            else
            printf("%-d,  ", mul);
        }
        printf("\n");
    }
}