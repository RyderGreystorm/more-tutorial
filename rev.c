#include <stdio.h>
#include <string.h>

void print_rev(char *s);
int main(void)
{
 char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
   
    return 0;
}

void print_rev(char *s)
{
int i, len;
len = strlen(s);
char ch;

for (i = 0; i < len/2; i++)
{
    ch = s[i];
    s[i] = s[len - i - 1];
    s[len - i - 1] = ch;
}
}