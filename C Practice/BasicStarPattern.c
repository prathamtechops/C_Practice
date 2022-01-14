#include <stdio.h>
//Star pattern in C
int main(int argc, char const *argv[])
{
    /* Basic 5 star pattern */
    printf("........Basic 5 star pattern..........\n");
    printf("\n");
    for (int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}