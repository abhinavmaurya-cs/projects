/* Takes something Return nothing */
#include <stdio.h>
void add(int a,int b );
int main()
{ int x=0 , y=0 ;
    printf("Enter two numbers\n");
    scanf("%d %d", &x,&y);

add(x,y);
return 0;

}
void add(int a,int b ) /*this is example of Takes something Return nothing (int a,int b )*/ 
{ 
  int c;
    c=a+b;
printf("Sum is %d\n", c);

}