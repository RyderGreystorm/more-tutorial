#include <stdio.h>
#include <stdlib.h>

int print_last_digit(int i);

int main(void){
        int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar(r + '0');
    putchar('\n');
    return 0;
}

// int print_last_digit(int i)
// {
//     int x;
//     x = i % 10;
//     if (x < 0){
//         x = abs(x);
//     printf("%d", x);
//     }
//     else
//         printf("%d", x);

//     return x;
// }

int print_last_digit(int num)

{

        int x;



        x = num % 10;

        if (x < 0)

        {

                x = abs(x);

                putchar(x + '0');

        }

        else

                putchar(x + '0');

        return (x);

}