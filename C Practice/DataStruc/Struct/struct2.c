#include <stdio.h>
#include <string.h>

struct employee
{
    int no;
    int salary;
};

int main()
{
    int no_of_ep;
    printf("How many employees are there: ");
    scanf("%d", &no_of_ep);
    struct employee ep[no_of_ep];

    for (int i = 0; i < no_of_ep; i++)
    {
        printf("\nEnter the id of employee %d: ", i + 1);
        scanf("%d", &ep[i].no);
        printf("\nEnter the salary: ");
        scanf("%d", &ep[i].salary);
    }

    for (int i = 0; i < no_of_ep; i++)
    {
        printf("\nSalary of Employee %d: ", ep[i].no);

        printf(" %d", ep[i].salary);
    }
    return 0;
}
