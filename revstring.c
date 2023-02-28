#include <stdio.h>
#include <string.h>

void rev_string(char *s);

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);

    return 0;
}


void rev_string(char *s)
{
    int len;
    len = strlen(s);
    char ch;
    int i;
    for (i = 0; i < len/2; i++){
      
    ch = s[i];
    s[i] = s[len - i - 1];
    s[len - i - 1] = ch;
}
    
}