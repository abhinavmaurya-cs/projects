#include <stdio.h>

int main()
{
    int choice = 0; // Initialize to 0 to prevent garbage value bugs
    int n, a, b, s;
    
    do
    {
        printf("\n1. For addition\n2. For even\n3. For First N natural numbers\n4. Exit\n");
        printf("Enter your choice: ");
        
        // Safety check to prevent infinite loops if garbage data is read
        if (scanf("%d", &choice) != 1) 
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clears the input buffer
            choice = 0; 
            continue;   
        }

        switch (choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                s = a + b;
                printf("Sum is %d\n", s);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);
                if (n % 2 == 0)
                    printf("Even\n");
                else
                    printf("Odd\n");
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &a);
                for (b = 1; b <= a; b++)
                    printf("%d ", b);
                printf("\n");  
                break;
            case 4:
                printf("Byee byee\n");
                break;
            default:
                printf("Invalid option! Choose 1, 2, 3, or 4.\n");
                break;
        }

    } while (choice != 4);

    return 0;
}
