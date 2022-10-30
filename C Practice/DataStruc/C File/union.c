#include <stdio.h>
#include <string.h>

int main()
{

    FILE *f;

    char chr[50];

    f = fopen("test.txt", "r");

    if (f == NULL)
    {
        printf("file failed to open.");
    }
    else
    {
        printf("The file is now opened.\n");
        while (fgets(chr, 50, f) != NULL)
        {
            printf("%s", chr);
        }
        fclose(f);
        printf("The file is now closed.");
    }
    return 0;
}