//Program to print the following series for N given number 1+(1+2)+(1+2+3)+(1+2+3+4)……… 
#include <stdio.h>
int result(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    result(num);
    return 0;
}
int result(int number)
{
    int result = 0;
    for(int i = 1; i <= number; i++){
        for (int j = 1; j <= i; j++)
        {
           result += j;
        }
    }
    printf("%d", result);

}

