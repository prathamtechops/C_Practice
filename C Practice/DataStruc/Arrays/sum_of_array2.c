#include <stdio.h>
int add( int b[], int len){
    int sum = 0;
    for(int i = 0; i < len; i++){
        sum += b[i];
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int a[]= {0,1,2,3,4, 5};
    int len = sizeof(a) / sizeof(a[0]);
    printf("Sum of the arrays: %d\n", add(a, len));
    return 0;
}
