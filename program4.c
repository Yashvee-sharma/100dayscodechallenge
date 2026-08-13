// Day 2: Program 4
#include <stdio.h>
int main(){
    double radius, area, circumference;
    printf("Enter the  radius of the circle: ");
    scanf("%lf", &radius);
    area = 3.14 * radius * radius;
    circumference = 3.14 * 2 * radius;
    printf("Area of the circle is: %.2lf\n", area);
    printf("Circumference of the circle is: %.2lf\n", circumference);
    return 0;
}