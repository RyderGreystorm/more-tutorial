#include <stdio.h>

int main(void)
{
    char name[30];
    int x = 0;
    int i = 0;
    int sl = sizeof(name)/sizeof(name[0]);

    printf("PLease enter your name: ");
    gets(name);
   for (i = 0; i < sl; i++){
    if (name[i] != '\0')
        x++;
   }
   printf("%d", x);
   



    return 0;
}