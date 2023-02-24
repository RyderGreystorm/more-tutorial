#include <stdio.h>

int add(int a , int b);


int main(){

    int result;

    result = add(8, 4);
    printf("%d\n",result );
    result = add(18, 4);
    printf("%d\n",result);
    result = add(70, 30);
    printf("%d\n",result);
    return 0;
} 

int add(int a, int b)
{
    int result;
    result = a + b;

    return result;
}