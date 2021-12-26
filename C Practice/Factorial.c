#include <stdio.h>
int main(int argc, char const *argv[])
{
    int fact = 1;
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){ fact = fact * i;}
    printf("Factorial: %d\n", fact);
    return 0;
}
