#include <stdio.h>

int main(void)
{
    char s1[20], s2[20];
    printf("Please enter first word: ");
    gets(s1);
    printf("Please enter second word: ");
    gets(s2);

    //comparing compare

    int value;

    for (int i = 0; s1[i]!= '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
    {
        value = 1;
        break;
    }
    }

    if(value == 1)
        printf("words dont match\n");
    else
        printf("Matched!!\n");

    return 0;
}