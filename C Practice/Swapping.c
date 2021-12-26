#include <stdio.h>
//Write a C program to print your name, date of birth. and mobile number.
int main(int argc, char const *argv[])
{
    int num1, num2, temp1;
    printf("Enter a number:\n");
    scanf("%d",&num1);
    printf("Enter a second number:\n");
    scanf("%d",&num2);
    temp1 = num1;
    num1 = num2;
    num2 = temp1;
    printf("\n");
    printf("After swapping: a = %d, b = %d", num1, num2);

    return 0;
}
