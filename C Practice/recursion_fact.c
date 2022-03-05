#include <stdio.h>

long long int fact(int );

int main(int argc, char const *argv[])
{
    
    int a;
    printf("Enter s number: ");
    scanf("%d", &a);

    printf("%d", fact(a));

    return 0;
}

long long int fact(int n){
    if (n == 0 || n == 1) return 1;
    else  return n * fact(n - 1);;

}
