#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int rows, n;
    printf("Enter thr number of rows: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++){
        for (int k= 0; k < rows -i; k++){
            printf(" ");
        }
        n = 1;
        for (int k = 0; k <= i; k++) {
            printf(" %d", n);
            n = n * (i - k)/(k +1);
        }
    printf("\n");
    }
    return 0;
}
