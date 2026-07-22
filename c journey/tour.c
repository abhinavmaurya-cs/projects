#include <stdio.h>
int main()
{
    int country, spain, package, usa, japan;

    printf("Select a country:\n1. Spain\n2. USA\n3. Japan\n");
    printf("Enter choice (1-3):\n ");
    scanf("%d", &country);

    scanf("%d", &country);

    if (country == 1)
    {
        printf("Which package do you want to select:\n 1. For honeymoon\n 2. For family\n 3. For Adventure\n");
        scanf("%d", &package);
        if (package == 1)
        {
            printf("You will be charged 45K");
        }
        else if (package == 2)
        {
            printf("You will be charged 60K");
        }
        else if (package == 3)
        {
            printf("You will be charged 70K");
        }
    }
    else if (country == 2)
    {
        printf("Which package do you want to select:\n 1. For honeymoon\n 2. For family\n 3. For Adventure");
        scanf("%d", &package);
        if (package == 1)
        {
            printf("You will be charged 70K");
        }
        else if (package == 2)
        {
            printf("You will be charged 100K");
        }
        else if (package == 3)
        {
            printf("You will be charged 120K");
        }
    }
    else if (country == 3)
    {
        printf("Which package do you want to select:\n 1. For honeymoon\n 2. For family\n 3. For Adventure");
        scanf("%d", &package);
        if (package == 1)
        {
            printf("You will be charged 85K");
        }
        else if (package == 2)
        {
            printf("You will be charged 115K");
        }
        else if (package == 3)
        {
            printf("You will be charged 140K");
        }
    }
    else
    {
        printf("invalid choice\n");
    }
    return 0;
}