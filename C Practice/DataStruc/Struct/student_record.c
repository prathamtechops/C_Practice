#include <stdio.h>

struct student
{
    char name[100];
    int roll_no;
    int marks;
};

int main(int argc, char const *argv[])
{
    int n;
    printf("\nEnter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n--------------------------------");
        printf("\nEnter the name of the student: ");
        scanf("%s", &s[i].name);
        printf("\nEnter the roll_no: ");
        scanf("%d", &s[i].roll_no);
        printf("\nEnter the marks: ");
        scanf("%d", &s[i].marks);
    }
    printf("\n****************************************\n");
    printf("THE STUDENT RECORD");
    printf("\n****************************************\n");

    for (int i = 0; i < n; i++)
    {
        printf("\n--------------------------------");
        printf("\nName of the Student: %s ", s[i].name);
        printf("\nRoll_no: %d ", s[i].roll_no);
        printf("\nMarks: %d ", s[i].marks);
    }

    return 0;
}
