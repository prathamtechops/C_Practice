#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of the you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element Number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Printing Elements.....");

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }



    

    return 0;
}
