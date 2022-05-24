#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char s[] = "hello";
    char *t = malloc(strlen(s) + 1);
    if(t == NULL) return 1;
    strcpy(t, s);
    t[0] = toupper(t[0]);
    printf("%s\n", s);
    printf("%s\n", t);
    free(t);

    return 0;
}
