#include <stdio.h>

int linear(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return 0;
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6}; // array

    int key = 4; // element to search

    int ans = linear(arr, 6, key); // function call

    printf("%d\n", ans);

    return 0;
}
