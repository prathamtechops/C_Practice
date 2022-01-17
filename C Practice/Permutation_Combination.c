#include <stdio.h>
int factorial(int);
int permutation(int, int);
int combination(int, int);
int main()
{
    int n , r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    printf("Permutiion = %d\n", permutation(n,r));
    printf("Combination = %d\n", combination(n,r));
    return 0;
}
int factorial(int a){
    int factorial = 1;
    for (int i = 1; i <= a; i++)
    { factorial = factorial * i;}
    return factorial;
}
int permutation(int n, int r){
    int permutation = 1;
    //(n!) / (n-r)!
    permutation = factorial(n)/ factorial(n-r);
    return permutation;
}
int combination(int n, int r){
    int combination = 1;
    combination = factorial(n)/(factorial(r)*(factorial(n-r)));
    return combination;
}