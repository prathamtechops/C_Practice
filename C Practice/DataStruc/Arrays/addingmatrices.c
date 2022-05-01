#include <stdio.h>
#define Max 50
int main()
{
    int add[Max][Max];
    int i,j;
    int sum = 0;
    int a[Max][Max];
    int rows, columns;
    int b[Max][Max];
    printf("Enter the number of rows and columns of matrix a and b: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter the elements of the matrix a\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j <columns; j++){
        scanf("%d", &a[i][j]);
            }
        }
    printf("\n");
    printf("\t-------Matrix A---------\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j <columns; j++){
        printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    printf("Enter the elements of the matrix b\n");
    for (i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    printf("\t-------Matrix B---------\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j <columns; j++){
        printf("%d ", b[i][j]);
            }
            printf("\n");
        }
    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n");
    printf("\t-------Matrix C---------\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
        
    return 0;
}
