// Day 4: Program 2
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += i;
    }
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
}