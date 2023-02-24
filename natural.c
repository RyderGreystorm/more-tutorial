#include <stdio.h>

void print_to_98(int n);

int main(void)
{
    // print_to_98(0);
    // printf("\n\n");

    // print_to_98(98);
    // printf("\n\n");
    // print_to_98(111);
    // printf("\n\n");

    // print_to_98(81);
    // printf("\n\n");


    // print_to_98(-10);
    // printf("\n\n");

    return 0;
}

void print_to_98(int n)
{
    if (n < 98){
        for (n = n; n <= 98; n++)
            {printf("%d", n);
            if (n == 98){
                break;
            }
            printf(",");
            printf(" ");
        }
    } else {
            for ( n = n; n >= 98; n-- ){
                printf("%d", n);
                 if (n == 98){
                break;
            }
                printf(",");
                printf(" ");
            }
        }
}


