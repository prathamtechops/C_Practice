#include <stdio.h>
int *find_mid(int a[], int n);
int main(int argc, char const *argv[])
{
    int a[] = { 1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int *mid = find_mid(a, n);
    printf("%d", *mid);
    return 0;
}

int *find_mid(int a[], int n){
    return &a[n/2];
}
