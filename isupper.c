#include <stdio.h>
#include <ctype.h>

int _isupper(int c);
int _isdigit(int c);

int main(void)
{
 char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return 0;
}

int _isdigit(int c)
{
    if(isdigit(c)){
        return 1;
    } else {
        return 0;
    }
}

int _isupper(int c)
{
    if (isupper(c)){
        return 1;
    }else{
        return 0;
    }
}