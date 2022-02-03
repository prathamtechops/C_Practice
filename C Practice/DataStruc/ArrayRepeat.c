#include <stdio.h>
int main(int argc, char const *argv[])
{
    int seen[10] = {0};
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int rem;
    while(n >0){
        rem = n%10;
        if(seen[rem] == 1) break;
        seen[rem] = 1;
        n = n/ 10;
    }
    if(n == 0) printf("No");
    else printf("Yes");
    return 0;
}
