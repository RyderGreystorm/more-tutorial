#include <stdio.h>

//This program takes an input from the user and searches the array for it


int main(void)
{
    int n;
    int arr[] = {50, 100, 5, 20, 30, 1};
    int x = sizeof(arr)/sizeof(arr[0]);

    printf("Please input a number to search: ");
    scanf("%d", &n);


    for (int i = 0; i < 6; i++)
    {
        if(arr[i] == n){
            printf("Found\n");
            return 0;
        } 
    
    }
    printf("Not found\n");
    return 1;
    // return (0);
}