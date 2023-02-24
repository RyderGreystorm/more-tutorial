#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char *input;
    char *word[] = {"Fafa", "John", "Doe", "Ben", "Tech"};
    int x = sizeof(word)/sizeof(word[0]);

    printf("Please enter your search query here: ");
    fgets(input, 20, stdin);

    for (i = 0; i < 5; i++)
    {
        if (!strcmp(word[i], input))
        {
            printf("Found in database", input);
            break;
        }
    }
 
    return 1;
    // return 0;
}