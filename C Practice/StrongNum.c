#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, rem, fact = 1, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int q = num;
    while(q != 0){
        rem = q%10;
        for (int i = 1; i<=rem; i++){
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q/ 10;
    }
    (result == num)?printf("Its a strong number"):printf("Its not a strong number");


    return 0;
}
