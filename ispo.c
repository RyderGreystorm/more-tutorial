#include <stdio.h>
#include <stdlib.h>

int _abs(int i);

int main(void)
{
     int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return 0;
}

int _abs(int i)
{
   
    if (i < 0)
    {
        return (-i);
    } else if (i > 0 ){
        return i;
    } else{
        return 0;
    }
}