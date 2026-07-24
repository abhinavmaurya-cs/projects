// Takes Something And Return Something
#include <stdio.h>
int add( int,int );
void main()
{
    int x,y,s;
    printf("Enter two numbers:\n");
   scanf("%d %d", &x , &y);
    s = add(x,y);
    printf("Sum is %d:\n", s);
}

int add(int a , int b)
{
    int c;
    c=a+b;
   return c ; 
    /*return is used here bcz it is takes Something and return something's example*/ 
}