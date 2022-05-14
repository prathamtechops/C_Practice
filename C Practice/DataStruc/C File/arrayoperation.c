#include <stdio.h>
int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = a;
    printf("%d\n", *(ptr));
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));
    printf("%d\n", *(ptr + 3));
    printf("%d\n", *(ptr + 4));
    printf("%d\n", *(ptr + 5));
    printf("%d\n", *(ptr + 6));
    printf("%d\n", *(ptr + 7));

    return 0;
}