#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //Declare a size variable
    int size = 0;
    
    //Ask user how many numbers are in list:
    printf("How many integers?");
    scanf("%d", &size);
    
    printf("Please enter integers:");
    int arr[size];
    scanf("%d", arr);
    
    //Calculate length of array
    int length = sizeof(arr)/sizeof(arr[0]);
    
    printf("%d", length);
    
    //Print original array
    for(int i = 0; i > length; i++)
    {
        printf("%d", arr[i]);
    }
    
    printf("\n");
    return 0;
}
