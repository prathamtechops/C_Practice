#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    float *height;
    float sum = 0, avg;
    printf("\nEnter the number of students: ");
    scanf("%d", &N);
    height = (float *)malloc(N * sizeof(float));
    for (int i = 0; i < N; i++)
    {
        printf("Input height for student %d:  ", i + 1);
        scanf("%f", &height[i]);
        sum += height[i];
    }
    avg = sum / (float)N;
    printf("Average height = %.3f\n", avg);
    free(height);
    return 0;
}
