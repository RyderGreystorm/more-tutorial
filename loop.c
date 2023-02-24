#include <stdio.h>

void more_numbers(void);

int main(void)
{
    // int i, j;

    // for (i = 0; i <= 10; i++){
    //     for (j = 0; j <= 14; j++){
    //      if (j >= 10)
    //         putchar((j / 10) + '0');
    //     putchar((j % 10) + '0');

    //    }
    //     putchar('\n');
    // }

more_numbers();
    return 0;
}

void more_numbers(void)
{       
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				putchar((j / 10) + '0');
		    putchar((j % 10) + '0');
		}
		putchar('\n');
	}
} 