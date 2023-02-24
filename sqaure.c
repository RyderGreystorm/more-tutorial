#include <stdio.h>

void print_square(int size);

int main(void)
{
  
    print_square(2);
    print_square(10);
    print_square(0);
    
    return 0;
}

void print_square(int size){
    int i, j;

    for (i = 1; i <= size; i++){
        for (j = 1; j <= size; j++){
            putchar('#');
        }
        putchar('\n');
    }
}