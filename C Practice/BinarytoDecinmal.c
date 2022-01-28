#include <stdio.h>
int main(int argc, char const *argv[])
{
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    int q = binary;
    int decimal = 0, weights = 1;
    int rem;
    while (binary != 0) {
        rem = binary % 10;
        decimal = decimal + (rem*weights);
        binary = binary / 10;
        weights = weights * 2;
    }
    printf("The decimal value of %d is %d\n", q, decimal);
    
    return 0;
}
