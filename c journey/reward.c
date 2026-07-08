#include <stdio.h>

int main()
{
    int maths = 1, science = 2, subject;
    int a = 15, b = 45;

    printf("which subject you have passed 1.for maths,2. for science,3. for both\n");
    scanf("%d", &subject);
    printf("you have entered %d as your passing subject\n", subject);
    if (subject == 3)
    {
        printf("you are rewarded %d", b);
    }
    else if (subject == 1)
    {
        printf("you are rewarded %d", a);
    }
    else if (subject == 2)
    {
        printf("you are rewaded %d", a);
    }
    return 0;
}