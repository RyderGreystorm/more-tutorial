#include <stdio.h>
 char *leet(char *);

int main(void)
{
 char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return 0; 
}

char *leet(char *str)
{
    int i, j;

    char s[] = "aAeEoOtTlL";
    char ss[]= "4433007711";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j= 0; j < 10; j++)
       { if (str[i] == s[j])
            str[i] = ss[j];}
    }
    return str;
}