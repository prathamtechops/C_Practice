// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    float average;
    static int sum = 0;
    int num;
    int n;
    printf("How many numbers are there: \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("Enter the number: ");
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("Average of %d numbers is %.2f", n, average = sum/n);
    return 0;
}

