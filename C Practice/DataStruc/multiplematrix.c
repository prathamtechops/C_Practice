#include <stdio.h>
#define MAX 50
int main(int argc, char const *argv[])
{
    int product[MAX][MAX];
    int sum = 0;
    int a[MAX][MAX];
    int arows, acolumns;
    printf("Enter the number of rows and columns of matrix a: ");
    scanf("%d %d", &arows, &acolumns); 
    int b[MAX][MAX];
    int brows, bcolumns;
    printf("Enter the number of rows and columns of matrix a: ");
    scanf("%d %d", &brows, &bcolumns); 
    if (acolumns != brows) print("The number of rows and columns are not equal so the multiplication of matrix is not possible");
    else{
        printf("Enter the elements of the matrix a:\n ");
        for (int i = 0; i <arows; i++){
            for (int j = 0; j <acolumns; j++){
                scanf("%d", &a[i][j]);
            }
        }
        
        printf("\n");
        printf("Enter the elements of the matrix b:\n ");
        for (int i = 0; i <brows; i++){
            for (int j = 0; j <bcolumns; j++){
                scanf("%d", &b[i][j]);
            }
            }
        
        
    }
    return 0;
}
