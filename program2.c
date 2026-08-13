// day 1: Program 2
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    printf("The sum of two numbers is: %d\n", a+b);
    printf("The difference of two numbers is: %d\n", a-b);
    printf("The product of two numbers is: %d\n", a*b);
    if (a == 0 || b == 0) {
        printf("Division by zero is not allowed. \n");
    } else {
        printf("The division of two numbers is: %d\n", a/b);
    }
}