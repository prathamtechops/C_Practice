
#include <stdio.h>
//Star pattern in C
int main(int argc, char const *argv[])
{
    /* Number */
    printf("........number Pattern..........\n");
    printf("\n");
    for (int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}