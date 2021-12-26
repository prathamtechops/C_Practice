#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1 = 0, num2 = 1;
    int num3;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n");
    printf(".................................\n");
    printf("First %d Fibonnaci Numbers\n", n);
    printf(".................................\n");
    printf("%d %d", num1, num2);
    for (int i = 1; i <= n - 2; i++){
        num3 = num1 + num2;
        printf(" %d", num3);
        num1 = num2;
        num2 = num3;
    }
    return 0;
}
