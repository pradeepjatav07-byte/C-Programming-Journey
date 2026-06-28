#include<stdio.h>
#include<string.h>
void main ()
{
    int arr[10] = {3,4,2,1,7,8,6,54,7,18};
    int N = 10, i, c = 0, data =54;
    printf("Array Element are -- \n\n");
    for(i = 0 ; i<N ; i++)
        printf("%d ",arr[i]);
    printf("\n\nAfter Search -- \n\n");
    for(i = 0 ; i < N ; i++)
    {
        if(arr[i] == data )
        {
            printf("Data Found ... %d \n\n",data);
            c = 1 ;
            break;
        }
    }
    if (c == 0)
        printf("Data Not Found .. \n\n");
}
