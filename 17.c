#include <stdio.h>

int main()
{
    int arr[100];
    int size, i, num, flag;

    
    printf("Enter size of array: ");
    scanf("%d", &size);

    
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to search within the array: ");
    scanf("%d", &num);

    
    flag = 0; 
    for(i=0; i<size; i++)
    {
        
        if(arr[i]==num)
        {
            flag = 1;
            printf("\n%d is found at position %d", num, i+1);
            break;
        }
    }

   
    if(flag==0)
    {
        printf("\n%d is not found in the array", num);
    }

    return 0;
}
