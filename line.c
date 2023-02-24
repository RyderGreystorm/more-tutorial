#include <stdio.h>

void print_line(int n);

int main(void)
{   
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);


    return 0;
}

void print_line(int n)
{
    int i, j;
    if (n == 0 || n < 0){
        putchar('\n');
    } else{
        for (i = 0; i <= n; i++){
           for (j = 0; j <= i; j++)
                    putchar(' ');
            putchar('\\');
            putchar('\n');
        }
        putchar('\n');
    }
}