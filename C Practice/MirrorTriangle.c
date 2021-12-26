#include <stdio.h>
int main(int argc, char const *argv[])
{
   int rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (int i = 1; i <= rows; i++){
       for (int j = 1; j <= rows; j++){
           if((i + j) <= rows) printf(" ");
           else printf("*");
       }
       printf("\n");
   }

   return 0;

}
