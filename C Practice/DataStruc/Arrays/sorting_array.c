#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int a[100]; 
    int temp;
    printf("How many elements are there in a array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    { 
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted elements...\n");
    for (int i = 0; i < n; i++)
    { 
        printf("%d ", a[i]);
    }

    

    return 0;
}
