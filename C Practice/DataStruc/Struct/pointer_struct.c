#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    int marks;
};
int main(int argc, char const *argv[])
{
    struct student s, *ptr;
    ptr = &s;
    s.roll = 10;
    s.marks = 1;
    printf("%d\n", s.roll);
    printf("%d\n", s.marks);
    printf("%d\n", ptr->roll);
    printf("%d\n", ptr->marks);
    return 0;
}
