#include <stdio.h>
//Write a C program to print your name, date of birth. and mobile number.
int main(int argc, char const *argv[])
{
    int num1, num2, temp1;
    printf("Enter the value of a:\n");
    scanf("%d",&num1);
    printf("Enter the value of b:\n");
    scanf("%d",&num2);
    printf("......Original values........\n");
    printf("a = %d, b = %d", num1, num2);
    temp1 = num1;
    num1 = num2;
    num2 = temp1;
    printf("\n");
    printf(".......After swapping......\na = %d, b = %d", num1, num2);
    return 0;
}
