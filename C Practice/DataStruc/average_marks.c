// Online C compiler to run C program online
#include <stdio.h>

struct student
{
    int roll_no;
    float marks[5];
};
int main()
{
    int n;
    struct student s[n];
    float sum = 0;
    float total_sum = 0;
    float avg = 0;
    printf("\nEnter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the roll no of student %d ", i + 1);
        scanf("%d", &s[i].roll_no);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter marks for Roll No. %d", s[i].roll_no);
        for (int j = 0; j < 5; j++)
        {
            printf("\nSubject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            sum = sum + s[i].marks[j];
        }
        total_sum = total_sum + sum;
    }
    printf("\n");
    avg = total_sum / n;
    printf("\nThe average marks of the class: %f", avg);
    return 0;
}
