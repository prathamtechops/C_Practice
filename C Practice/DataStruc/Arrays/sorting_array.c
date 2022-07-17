#include <stdio.h>
int main(int argc, char const *argv[])
{

    int a[5] = {5, 4, 3, 2, 1};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                for (int i = 0; i < 5; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }
    }

    printf("Sorted elements...\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
