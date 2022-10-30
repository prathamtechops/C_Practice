#include <stdio.h>

float s(float x)
{
    float y = x * x;
    return y;
}

int main()
{
    printf("%f", s(3));

    return 0;
}
