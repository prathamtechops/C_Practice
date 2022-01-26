#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int num, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    int val1 = ceil(sqrt(num));
    int val2 = num;
    for(int i = 1; i <= val1; i++) {
        if(val1 % i == 0)
        count = 1;
    }

    if((count == 0) && (val2 != 1) || val2 == 2 || val2 == 3)
    printf("Its a prime number");
    else printf("Its not a prime number");
    return 0;
}
