#include <stdio.h>
int main()
{
    int num;
    while(1){
        printf("\nEnter a number: ");
        scanf("%d", &num);
        if (num >= 0) printf("Positive Number");
        else printf("Negative Number");
    }
    return 0;
}
