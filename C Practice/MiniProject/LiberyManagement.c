#include <stdio.h>
#include <string.h>
struct lib
{
    char book_n[100];
    char book_id[5];
    char author[100];
};
int main(int argc, char const *argv[])
{
    struct lib li[100];
    int k = 0, i = 0;
    int book_count = 0;
    while (k != 5)
    {
        printf("Welcome\n");
        printf("....Enter 1 to add a book....\n");
        printf("....Enter 2 to view the information....\n");
        printf("....Enter 3 to view total number of books...\n");
        printf("....Enter 4 to Exit.....\n");
        scanf("%d", &k);

        switch (k)
        {
        case 1:
            printf("Enter the name of the book: \n");
            scanf("%s", &li[i].book_n);
            printf("\nEnter the book id: \n");
            scanf("%s", &li[i].book_id);
            printf("Enter author name: \n");
            scanf("%s", &li[i].author);

            book_count++;
            break;

        case 2:
            for (int j = 0; j < book_count; j++)
            {

                printf("book name = %s\n", li[i].book_n);

                printf("author name = %s\n", li[i].author);

                printf("Book ID = %s\n", li[i].book_id);
            }
            break;
        case 3:
            printf("\n No of books in brary : %d", book_count);
            break;
        case 4:
            goto end;
        }
    }
end:;
    return 0;
}