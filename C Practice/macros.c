#include <stdio.h>
#define SUM(x,y) x+y
#define MAX(x,y) ((x>y)?x:y)
#define MIN(x,y) ((x<y)?x:y)
int main() {
    
    int a;
    int b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("\n********************************\n");
    printf("Maximum number is: %d\n",MAX(a,b));
    printf("\n********************************\n");
    printf("Minimum number is: %d\n",MIN(a,b));
    printf("\n********************************\n");
    printf("Sum is: %d\n",SUM(a,b));
    printf("\n********************************\n");
    return 0;
}
