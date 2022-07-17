#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct LIBRARY
{
    char bookId[10];
    char bookName[20];
    char bookAuthorName[20];
};

struct FeesPending
{
    char StudentName[20];
    char StudentId[20];
    char fees[20];
    char StudentCourse[10];
};

struct Facultyrelated
{
    char FacultyName[20];
    char FacultyEmailId[20];
    char FacultyProfession[20];
};

struct TimeTable
{
    char Subject[10];
    char time[10];
    char facultyName[20];
};
void main()
{
    bool confrim = true; // For checking purpose that users want continue or not
    while (confrim)
    { // Using while to calls many times
        printf("\n Are you Staff or student press (1) for staff and (2) for student.\n.");
        int StaffOrStudent;
        scanf("%d", &StaffOrStudent);
        switch (StaffOrStudent)
        {
        case 1:
        {
            printf("\nPress (1) for Library related (2) for FacultyRelated (3) for Fees related and (4) for Time table related.\n");
            int choice;
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            {
                Library_Function();
                break;
            }
            case 2:
            {
                Faculty_Function();
                break;
            }
            case 3:
            {
                FeesPending_Function();
                break;
            }
            case 4:
            {
                TimeTable();
                break;
            }
            default:
            {
                printf("You enter the wrong keyboard\n");
                break;
            }
            }
            break;
        }

        case 2:
        {
            printf("\nPress (1) for Library related (2) for FacultyRelated (3) for Fees related and (4) for Time table related.\n");
            int choice;
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            {
                Display_Library_Function();
                break;
            }
            case 2:
            {
                Fuclty_Display_Function();
                break;
            }
            case 3:
            {
                DisplayFeesPendingStudentList();
                break;
            }
            case 4:
            {
                DisplayTimeTable();
                break;
            }
            default:
            {
                printf("You enter the wrong keyboard");
                break;
            }
            }
            break;
        }
        default:
        {
            printf("You enter the wrong keyboard");
            break;
        }
        }
        printf("\nDo you want to continue or not if yes then press (1) for continue or (2) for not.\n");
        int ContinueOrNot;
        scanf("%d", &ContinueOrNot);
        if (ContinueOrNot == 1)
        {
            confrim = true;
        }
        else
        {
            confrim = false;
        }
    }
}

void Library_Function() // Making a library function
{
    printf("\nHow many book do you want to add\n");
    int Add;
    scanf("%d", &Add);
    struct LIBRARY Lib[Add];
    for (int i = 1; i <= Add; i++)
    {
        printf("\nEnter the bookName\n");
        scanf("%s", &Lib[i].bookName);
        printf("\nEnter the bookId\n");
        scanf("%s", &Lib[i].bookId);
        printf("\nEnter the book Author Name\n");
        scanf("%s", &Lib[i].bookAuthorName);
    }
    FILE *libptr;
    libptr = fopen("D:\CollageMangement\Lirary.txt", "w");
    if (libptr == NULL)
    {
        printf("\nError\n");
        exit(1);
    }
    for (int i = 1; i <= Add; i++)
    {
        printf("\nEnter the book Name\n");
        scanf("%s", &Lib[i].bookName);
        printf("\nEnter the book Author Name\n");
        scanf("%s", &Lib[i].bookAuthorName);
        printf("\nEnter the book id\n");
        scnaf("%d", &Lib[i].bookId);
    }
    for (int i = 1; i <= Add; i++)
    {
        fprintf(libptr, "BookName : %s BookAuthorName :%s BookId: %d", Lib[i].bookName, Lib[i].bookAuthorName, Lib[i].bookId);
    }
    fclose(libptr);
}

void Faculty_Function()
{
    printf("Enter Size of the faculty\n");
    int Size;
    scanf("%d", &Size);
    struct Facultyrelated Faculty[Size];
    for (int i = 1; i <= Size; i++)
    {
        printf("\nEnter the faculty Name\n");
        scanf("%s", &Faculty[i].FacultyName);
        printf("\nEnter the faculty Course\n");
        scanf("%s", &Faculty[i].FacultyProfession);
        printf("\nEnter the faculty Email Id\n");
        scanf("%s", &Faculty[i].FacultyEmailId);
    }
    FILE *facultyPtr;
    facultyPtr = (fopen("D:\CollageMangement\Faculty.txt", "w")); // Making File for stored faculty data
    if (facultyPtr = NULL)
    {
        printf("!\nError");
        exit(1);
    }
    for (int i = 1; i <= Size; i++)
    {
        fprintf(facultyPtr, "\nFaculty Name: %s Faculty Profession: %s Faculty EmailId: %s ",
                Faculty[i].FacultyName, Faculty[i].FacultyProfession);
    }
    flcose(facultyPtr); // close faculty stored data
}
void FeesPending_Function() // FeesRelated
{
    printf("\nHow many student still have pay to their fees");
    int PayingFeess;
    scanf("%d", &PayingFeess);
    struct FeesPending Fees[PayingFeess];
    for (int i = 1; i <= PayingFeess; i++)
    {
        printf("\nEnter the student course name\n");
        scanf("%", &Fees[i].StudentCourse);
        printf("\nEnter the student Id\n");
        scanf("%s", &Fees[i].StudentId);
        printf("\nEnter the student Name\n");
        scanf("%s", &Fees[i].StudentName);
        printf("\n Enter the amount\n");
        scanf("%d", &Fees[i].fees);
    }
    FILE *feesPtr;
    feesPtr = (fopen("D:\CollageMangement\Fees.txt", "w")); // making file to stored student feess
    if (feesPtr = NULL)
    {
        printf("\n!Error\n");
        exit(1);
    }
    for (int i = 1; i <= PayingFeess; i++)
    {
        fprintf(feesPtr, "\nStudentCourseName: %s StudentId: %s StudentName: %s Amount: %d ", Fees[i].StudentCourse, Fees[i].StudentId,
                Fees[i].StudentName, Fees[i].fees);
    }
    fclose(feesPtr); // closing file
}
void TimeTable()
{
    FILE *TimeTablePtr;
    TimeTablePtr = (fopen("D:\CollageMangement\TimeTable.txt", "w"));
    printf("Enter the size of the subject");
    int SizeOfSubject;
    scanf("%d", &SizeOfSubject);
    struct TimeTable time[SizeOfSubject];
    for (int i = 1; i <= SizeOfSubject; i++)
    {
        printf("\nEnter the Subject Name\n");
        scanf("%d", &time[i].Subject);
        printf("\nEnter the timing");
        scanf("%d", &time[i].time);
        printf("\nEnter the subject faculty name\n");
        scanf("%d", &time[i].facultyName);
    }
    if (TimeTablePtr == NULL)
    {
        printf("\n!Error\n");
    }
    for (int i = 1; i <= SizeOfSubject; i++)
    {
        fprintf(TimeTablePtr, "\nSubjectName:%s  Subject Faculty name:%s Subject Timing: %s \n");
    }
    fclose(TimeTablePtr);
}

void Display_Library_Function()
{

    printf("\nPress 1 for showing available books or new books.\n");
    int AvailableOrNewBook;
    scanf("%d", &AvailableOrNewBook);
    if (AvailableOrNewBook == 1)
    {
        Available_Books(1);
    }

    printf("\nYou can issued 3 books at a time\n");
    struct LIBRARY lib1[3];
    for (int i = 1; i <= 3; i++)
    {
        printf("\nEnter the book name\n");
        scanf("%s", &lib1[i].bookName);
        printf("\nEnter the book id\n");
        scanf("%s", &lib1[i].bookId);
    }
    FILE *DisplayBookData; // Stored the book data
    DisplayBookData = fopen("D:\CollageMangement \StoredStudent.txt", "w");
    if (DisplayBookData == NULL)
    {
        printf("\n!Error\n");
        exit(1);
    }
    for (int i = 0; i <= 3; i++)
    {
        fprintf("BookId: %s BookName: %s ", lib1[i].bookName, lib1[i].bookId);
    }
    flcose(DisplayBookData);
}

void DisplayTimeTable()
{
    FILE *DisplayTimeTablePtr; // Making a Displaying time table
    DisplayTimeTablePtr = (fopen("D:\CollageMangement \TimeTable.txt", "a"));
    char ch;
    if (DisplayTimeTablePtr == NULL)
    {
        printf("\nfile can't be open\n");
        exit(1);
    }
    while (!feof(DisplayTimeTablePtr))
    {
        ch = fgetc(DisplayTimeTablePtr);
        printf("%c", ch);
    }
    fclose(DisplayTimeTablePtr);
}
void DisplayFeesPendingStudentList()
{
    printf("\nDisplaying the student fees pending list\n");
    FILE *FeesPendingListPtr;
    FeesPendingListPtr = fopen("D:\CollageMangement\Fees.txt", "w");
    char ch;
    if (FeesPendingListPtr == NULL)
    {
        printf("\nfile can't be open");
        exit(1);
    }
    while (!feof(FeesPendingListPtr))
    {
        ch = fgetc(FeesPendingListPtr);
    }
    fclose(FeesPendingListPtr);
}
void Fuclty_Display_Function()
{

    FILE *FucltyDisplayPtr;
    FucltyDisplayPtr = fopen("D:\CollageMangement\Faculty.txt", "r");
    char ch;
    if (FucltyDisplayPtr == NULL)
    {
        printf("\nError\n");
    }
    while (!feof(FucltyDisplayPtr))
    {
        ch = fgetc(FucltyDisplayPtr);
        printf("%c", ch);
    }
    fclose(FucltyDisplayPtr);
}
