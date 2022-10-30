#include <stdio.h>

typedef struct Swap
{
    int a;
    int b;
} s;

void swap(s *no)
{
    int temp = no->a;
    no->a = no->b;
    no->b = temp;
}

int main(int argc, char const *argv[])
{
    s nums;
    nums.a = 1;
    nums.b = 2;
    printf("Before swapping...\n");
    printf("a = %d\n", nums.a);
    printf("b = %d\n", nums.b);

    swap(&nums);

    printf("After swapping...\n");
    printf("a = %d\n", nums.a);
    printf("b = %d\n", nums.b);

    return 0;
}
