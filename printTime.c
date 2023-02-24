#include <stdio.h>

int main(void)

{
        int i = 0;
        int j = 0;

        for (i = 0; i < 24; i++)
        {
                for (j = 0; j < 60; j++){
                        printf("%02d:%02d", i, j);
                        printf("\n");
                }
        }
        
        return 0;
}