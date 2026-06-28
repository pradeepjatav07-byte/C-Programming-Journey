#include<stdio.h>
#include<string.h>
void main()
{
    int arr[10] = {6,3,9,1,2,8,10,7,5,4};
    int i, j, t ;
    char c;
    printf("\nArray Elements are -- \n\n");
    for(i = 0 ; i<10 ; i++)
    {
        printf("%d   ",arr[i]);
    }
    printf("\n\nWhat You Want.. \n\n");
    printf("1. Selection Sort\n");
    printf("2. Bubble Sort\n");
    c = getch();
    if(c ='1')
    {
        printf("\nYou Choose Selection Sorting\n\n");
        for(i=0; i<10; i++)
        {
            for(j=i+1; j<10 ; j++)
            {
                if(arr[i]>arr[j])
                {
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }
        printf("Array Elements are -- \n\n");
        for(i=0; i<10; i++)
        {
            printf("%d  ",arr[i]);
        }
    }
    else if (c = '2')
    {
        printf("\nYou Choose Bubble Sorting\n\n");
        for(i=0; i<10; i++)
        {
            for(j=i+1; j<10 ; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    t=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=t;
                }
            }
        }
        printf("Array Elements are -- \n\n");
        for(i=0; i<10; i++)
        {
            printf("%d  ",arr[i]);
        }
    }
    else
        printf("You Enter Wrong input ...");
}
