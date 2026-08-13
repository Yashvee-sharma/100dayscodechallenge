// Day3 - Program 1
#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("Enter teperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in fahrenheit is: %.2f\n", fahrenheit);
    return 0;
}