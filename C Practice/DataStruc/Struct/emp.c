#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char *name;
    int age;
};

int main(int argc, char const *argv[])
{
    struct employee *em = malloc(sizeof(struct employee));
    printf("Enter name: ");
    gets(em->name);
    em->age = 100;
    printf("%s ", em->name);
    printf("%d", em->age);
    return 0;
}
