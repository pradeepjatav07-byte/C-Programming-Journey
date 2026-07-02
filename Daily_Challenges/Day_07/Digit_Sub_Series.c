#include<stdio.h>
void main()
{
    int n, data = 0,sum = 0 ;
    printf("Enter a Number -- ");
    scanf("%d",&n);
    printf("\n\nSeries -- \n\n");
    for(data = 0 ; n > 0; (data = data * 10 + (n%10)),n = n/10);
    n = data;
    for( ; n>0 ; n = n/10)
    {
        for(data = n, sum = 0 ;
        data>0 ; data = data/10)
        {
            sum = (sum*10) + (data%10);
            printf("%d  ",sum);
        }
    }
}
