#include <stdio.h>
int main(int argc, char const *argv[])
{
   int no, n; 
   printf("Enter the number of rows: ");
   scanf("%d", &no);
   for (int rows = 0; rows < no; rows++){
       for (int spaces = 0; spaces <  no - rows; spaces++){
            printf(" ");
       }
       n = 1;
       for(int k = 0; k <= rows; k++){
           printf(" %d", n);
           n = n * (rows - k)/ (k + 1);
       }
       printf("\n");
   }

   return 0;

}