/* Takes something Return nothing  */
/*Here we must use void because it is Takes something Return nothing type if we use int instead of void it will may misbehave */
#include <stdio.h>
  void add(int a,int b ); // must so it does'nt throw garbage value
int main()
{ int x=0 , y=0 ;
  printf("Enter two numbers\n");
    scanf("%d %d", &x,&y);

add(x,y); // x,y are actual arguments call by value

}
void add(int a,int b ) /*this is example of Takes something Return nothing (int a,int b ),  int a,int b are formal arguments*/ 
{ 
  int c;
    c=a+b;
printf("Sum is %d\n", c);

}