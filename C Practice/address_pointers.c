#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
    char *s = "Nidhi";
    printf("%s", s);
    int a[] = { 0, 1, 2, 3};
    printf("\n%d", *a);
    printf("\n%d", *(a+1));
    printf("\n%d", *(a+2));
    printf("\n%d", *(a+3));
    return 0;
}


