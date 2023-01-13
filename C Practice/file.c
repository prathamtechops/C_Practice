#include <stdio.h>

int gcd(int a, int b);

int main(int argc, char const *argv[])
{
    int a = 1009090, b = 7483782;

    printf("%d ", gcd(a, b));
    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}