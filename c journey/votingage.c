#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age");
    scanf("%d", &age);
    printf(" your age is %d as you entered\n ", age);
    if (age >= 18)
    {
        printf("you can vote");
    }
    else if (age > 10)
    {
        printf("you are between 10 and 18 so you cannot vote till you are 18");
    }
    else if (age < 10)
    {
        printf("you are not even a teenager so you cannot vote");
    }

    else
    {
        printf("you can't vote as your age is less than 18");
    }
    return 0;
}