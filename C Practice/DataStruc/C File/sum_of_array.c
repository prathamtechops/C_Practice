#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 9};
    int sum = 0;
    int len = 0;
    len = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < len ; i++){
        sum = sum + a[i];
    }
    printf("sum = %d\n", sum);

    return 0;
}
