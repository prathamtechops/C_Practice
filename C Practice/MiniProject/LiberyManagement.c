#include <stdio.h>
#include <string.h>
struct lib {
       char book_n[100];
       char book_id[5];
       char author[100];
    };
int main(int argc, char const *argv[])
{
    struct lib lib[100];
    int i = 0;
    int book_count = 0;
    while(i != 5){
        printf("Welcome\n");
        printf("....Enter 1 to add a book....\n");
        printf("....Enter 2 to view the information....\n");
        printf("....Enter 3 to view total number of books...\n");
        printf("....Enter 4 to Exit.....\n");
        scanf("%d", &i);
    

    switch(i){
        case 1:
            printf("Enter the name of the book: \n");
            scanf("%s", lib[i].book_n);
            printf("\nEnter the book id: \n");
            scanf("%s", lib[i].book_id);
            printf("Enter author name: \n");
            scanf("%s", lib[i].author);

            book_count ++;
            break;

        case 2:
            for (i = 0; i < book_count; i++) {
  
                printf("book name = %s\n",lib[i].book_n);
  
                printf("author name = %s\n",lib[i].author);
  
                printf("Book ID = %s\n",lib[i].book_id);
            }
            break;
        case 3: 
             printf("\n No of books in brary : %d",book_count);
             break;
        case 4: 
            goto end;

    }
    }
    end: ;
    return 0;
}
