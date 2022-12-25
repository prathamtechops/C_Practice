#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    // 1 2 3
    printf("Original Number: %d%d%d", a, b, c);
    // taking a temp variable
    int temp;
    // swapping temp and a;
    temp = a;
    // temp = 1 , a = 1;
    a = c;
    // a = 3 , c = 3;
    c = temp;
    // because temp = 1...so c = 1
    printf("\nReverse Number: %d%d%d", a, b, c);
    return 0;

}
