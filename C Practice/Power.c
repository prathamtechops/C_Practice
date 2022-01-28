#include<stdio.h>
#include<math.h>
      int main()
      {
        int base,power,d;
        printf("Enter value of base = ");
        scanf("%d",&base);
        printf("Enter value of power = ");
        scanf("%d",&power);
        d=pow(base,power);
        printf("%d",d);
        return 0;
      }