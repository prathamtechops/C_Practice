#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        swap(&arr[s], &arr[e]);
        s++;
        e--;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {0, 1, 2, 3, 4};

    reverse(arr, 5);
    return 0;
}
