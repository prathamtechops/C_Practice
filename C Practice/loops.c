#include <stdio.h>

// with argument  with eturn type

int sum(int a, int b);

int main(int argc, char const *argv[])
{

    int c = sum(3, 5);
    printf("%d\n", c);
    return 0;
}

int sum(int a, int b)
{

    // printf("%d", a + b);
    return a + b;
}