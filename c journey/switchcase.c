#include <stdio.h>
int main()
{
    int choice, n, a, b, s;

    printf("1. For adittion\n 2. for even\n 3. for First N natual number\n");
    scanf("%d", &choice);
    switch (choice)
        
    {
    case 1:
        printf("Enter two numbers");
        scanf("%d %d", &a, &b);
        s = a+b ;
        printf("Sum is %d", s);
break;
    case 2:
        printf("Enter a number\n");
        scanf("%d", &n);
        if (n % 2 == 0)
            printf("Even");
        else
            printf("odd");
break;
    case 3:
        printf("Enter a number");
        scanf("%d", &a);
        for (b = 1; b <= a; b++)
            printf("%d ", b);
            break;
    }

    return 0;
}