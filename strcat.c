#include <stdio.h>
#include <string.h>

int main(void){

    char str1[30] = "Fafa ";
    char str2[10] = "Greystorm";
    int i, len1, len2;

    len1 = strlen(str1);
    len2 = strlen(str2);

    for (i = 0; i < len2; i++)
    {
        str1[len1 + i] = str2[i];
    }

    printf("%s", str1);
    return 0;
}