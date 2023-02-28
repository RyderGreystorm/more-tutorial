#include <stdio.h>
#include <string.h>

void puts2(char *str);

int main(void)
{
    char *str;

    str = "Holberton!";
    puts2(str);
    return 0;
}

void puts2(char *str)

{

        int i, len;



        len = strlen(str);



        for (i = 0; i <= len; i++)

        {

                if (i % 2 == 1)

                        continue;

                else

                        putchar(str[i]);

        }

}

