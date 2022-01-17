//Program to print the following series for N given number 1+(1+2)+(1+2+3)+(1+2+3+4)……… 
#include <stdio.h>
int output(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    output(num);
    return 0;
}
int output(int number)
{
    int result = 0;
    for(int i = 1; i <= number; i++){
           printf("(");
        for (int j = 1; j <= i; j++)
        {
           printf("%d", j);
           if (i == j) printf(")"); 
           else printf("+");
        }  
        if(i==number) printf("");
        else printf("+");
    }
    

}

