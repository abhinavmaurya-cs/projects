// Takes Nothing And Return Something
#include <stdio.h>
int add();
void main()
{
    int s;
    s = add();
    printf("Sum is %d:\n", s);
}

int add()
{
    int a,b,c;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
   return (a + b);  /*return is used here bcz it is takes nothing and return something's example
   we also can: 
   s=a+b;
   return s; */ 
}