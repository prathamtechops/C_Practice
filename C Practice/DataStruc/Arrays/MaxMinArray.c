#include <stdio.h>
void minmax(int a[], int len, int *min, int *max){
    *min = a[0];
    *max = a[0];
    for (int i = 1; i < len; i++)
    { 
        if (a[i] < *min) *min = a[i];
        if (a[i] > *max) *max = a[i];
    }
}
int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 23, 45, 6 ,89};
    int min, max;
    int len = sizeof(a)/sizeof(a[0]);
    minmax(a, len, &min, &max);
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
}
