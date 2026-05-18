#include<stdio.h>
#include<conio.h>

void main()
{
    int choice, i, j, rows;

    printf("\n***** Logic Building Patterns *****\n");
    printf("1. Right Half Pyramid (*)\n2. Inverted Right Half Pyramid (*)\n3. Number Pattern\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        for(i = 1; i <= rows; i++)
        {
            for(j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if(choice == 2)
    {
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        for(i = rows; i >= 1; i--)
        {
            for(j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if(choice == 3)
    {
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        for(i = 1; i <= rows; i++)
        {
            for(j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    else if(choice == 4)
    {
        return;
    }

    printf("\nPress 1 to continue...");
    if(getch() == '1')
    {
        main();
    }
}
