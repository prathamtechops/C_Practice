#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, result = 0, q, rem;
    printf("Enter a number: ");
    scanf("%d", &number);
    q = number;
    while (q!= 0)
    {
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }
    if (result == number) printf("Its a pallindrome");
    else printf("Its not a pallindrome");
    return 0;
}
 