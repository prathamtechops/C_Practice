#include <stdio.h>
#define Max 50
int main()
{
    int add[Max][Max];
    int sum = 0;
    int a[Max][Max];
    int arows, bcolumns, acolumns, brows;
    int b[Max][Max];
    printf("Enter the number of rows and columns of matrix a: ");
    scanf("%d %d", &arows, &acolumns);
    printf("Enter the number of rows and columns of matrix b: ");
    scanf("%d %d", &brows, &bcolumns);
    if(arows != brows || acolumns != bcolumns) printf("Addintion of matrix a and b is not possible\n");
    else{
        printf("Enter the elements of the matrix a\n");
        for(int i = 0; i < arows; i++){
            for(int j = 0; j < acolumns; j++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of the matrix b\n");
        for (int i = 0; i < brows; i++){
            for(int j = 0; j < bcolumns; j++){scanf("%d", b[i][j]);
            }
        }
        for(int i = 0; i < arows; i++){
            for(int j = 0; j < bcolumns; j++){
                add[i][j] = a[i][j] + b[i][j];
                printf("%d ",add[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}
