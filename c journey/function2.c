/* Takes something Return nothing  */
/*Here we must use void because it is Takes something Return nothing type if we use int instead of void it will may misbehave */
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