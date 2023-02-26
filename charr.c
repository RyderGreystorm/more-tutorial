#include <stdio.h>

int main(void){
    char name[30];

    printf("Please enter your name: ");
    // scanf("%s %s", fname, lname);
    gets(name);

    printf("%.8s\n", name);
    puts(name);

        return 0;
}