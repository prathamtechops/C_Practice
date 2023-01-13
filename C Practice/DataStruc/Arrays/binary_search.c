#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{

    int arr[7] = {1, 4, 5, 7, 8, 34, 50};

    int key = 8;

    printf("%d", binarySearch(arr, 7, key));

    return 0;
}
