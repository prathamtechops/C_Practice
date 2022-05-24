#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    // int c;
    FILE *file = fopen("bts.txt", "a");
    // while ((c = fgetc(file)) != EOF)
    // {
    //     printf("%c", c);
    // }
    char *s;
    gets(s);
    printf("%s", s);

    return 0;
}
