#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf("Enter the value for Number_1:");
    scanf("%d", &num1);
    printf("Enter the value for Number_2:");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The value of sum of two numbers is =  %d", sum);

    return 0;
}