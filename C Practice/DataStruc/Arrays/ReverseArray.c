#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    for (int i = 0; i < 9; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int j = 8; j >= 0; j--) 
    printf("%d ", a[j]);


    return 0;
}
