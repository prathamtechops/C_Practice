#include <stdio.h>
#define Max 50
int main()
{
    int add[Max][Max];
    int sum = 0;
    int a[Max][Max];
    int rows, columns;
    int b[Max][Max];
    printf("Enter the number of rows and columns of matrix a and b: ");
    scanf("%d %d", &rows, &columns);
    
         printf("Enter the elements of the matrix a\n");
        for(int i = 0; i < rows; i++){
            for(int j = 0; j <columns; j++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of the matrix b\n");
        for (int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                scanf("%d", b[i][j]);
            }
        }
        for(int r = 0; r < rows; r++){
            for(int c = 0; c < columns; c++){
                add[r][c] = a[r][c] + b[r][c];
            }
        }
        for(int r = 0; r < rows; r++){
            for(int c = 0; c < columns; c++){
                printf("%d", add[r][c]);
            }
            printf("\n");
        }
    return 0;
}
