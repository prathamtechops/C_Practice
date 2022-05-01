#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    printf("%d ", sizeof(a)/sizeof(a[0]));
    return 0;
}
