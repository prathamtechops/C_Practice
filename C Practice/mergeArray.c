#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], b[5], c[10], i;

    int k = 0;
    printf("enter an array");

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("first array");
    for (i = 0; i <= 4; i++)
    {
        printf("%d", a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("second array");
    for (i = 0; i <= 4; i++)
    {
        printf("%d", b[i]);
    }

    for (i = 0; i <= 4; i++)
    {
        c[i] = a[i];
    }
    printf(" %d ", i);
    for (i = 5; i <= 9; i++)
    {
        c[i] = b[k];
        k++;
    }
    printf("merged array");
    for (i = 0; i <= 9; i++)
    {
        printf("%d", c[i]);
    }
}