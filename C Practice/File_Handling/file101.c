#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    // int c;
    FILE *file = fopen("bts.txt", "r");
    char c = fgetc(file);
    while ((c = fgetc(file)) != EOF)
    {
        printf("%c", c);
    }

    return 0;
}
