#include <stdio.h>

void ptr(int *n);

int main(void)
{
     int n;

    n = 402;
    printf("n=%d\n", n);
    ptr(&n);
    printf("n=%d\n", n);

    return 0;
}

void ptr(int *n){
    *n = 98;
}