#include <stdio.h>
#include <math.h>
float cal(float);
double factorial(int);
int main()
{
    int degree; 
    float radian;
    float result;
    printf("Enter the value of x in degrees: ");
    scanf("%d", &degree);
    radian = degree * (3.14159 / 180.0);
    printf("Sin(%d) = %f\n", degree, cal(radian));
    return 0;
}
double factorial(int num){
    double factorial = 1;
    for(int i = 1; i <= num; i++){
        factorial = factorial * i;
    }
    return factorial;
}
float cal(float radian){
    float result = 0;
    int n = 1;
    int sign = 1;
    for(int i = 1; n <= 10; i += 2){
         result = result + sign * (pow(radian, i) / factorial(i)) ;
         n++;
         sign *= -1;
    }
    return result;
}
