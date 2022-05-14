#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char *c = "Hello";
    char *s = "Hello";
    if(strcmp(c,s) == 0) printf("Same");
    else printf("Not same");
    return 0;
}

