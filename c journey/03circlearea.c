#include <stdio.h>
int main()
{
    float radius, area;
    const float a = 3.14;
    printf("Enter the radius of circle:");

    scanf("%f", &radius);
    printf("You have entered %f as value of radius\n", radius);
    area = a * radius * radius;

    printf("The area of circle is %.2f:", area);

    return 0;
}