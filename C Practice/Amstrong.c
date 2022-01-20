#include <stdio.h>
int main()
{
    int num, q, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    q = num;
    while(q != 0){
        q = q/ 10;
        count++;
    }
    int cnt = count;
    int result = 0;
    q = num;
    int mul = 1;
    while(q != 0){
        int rem = q%10;
        while(cnt != 0){
            mul = mul *rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/ 10;
        mul = 1;
    }
(result == num)?printf("Its a armstrong number"):printf("Its not a armstrong number");

    return 0;
}
