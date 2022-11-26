#include <stdio.h>

void function();
int main(int argc, char const *argv[])

{
    printf("\nFunction call 1..");
    function();
    printf("\nFunction call 2..");
    function();
    printf("\nFunction call 3..");
    function();
    return 0;
}

void function()
{
    static int x = 100;
    printf("\nValue of x %d", x);
    x = x - 10;
}
