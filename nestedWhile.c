#include <stdio.h>

int main(void)
{
int i = 0, j, o;


    while(i < 5)
    {
        j = 0;
        while (j < 3)
        {
            printf("2 ");
            j++;
        }
        printf("\n");
        i++;
    }

    o = 89%7;
    printf("%d", o);

    return 0;
}