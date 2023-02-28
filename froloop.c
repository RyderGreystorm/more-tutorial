#include <stdio.h>

int main(void)
{
    int i, n, ans;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 0; i <= 10; i++)
    {
        ans = n * i;

        printf("%d x %d = %d\n", n, i, ans);
    }
    return 0;
}