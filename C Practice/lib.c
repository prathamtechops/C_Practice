#include <stdio.h>
#include <conio.h>

int noOfSRecords = 0;
int noOfFRecords = 0;
int Sreocrds = 0;
int Freocrds = 0;

void intro()
{
    printf("WELCOME");
}

struct Student
{
    char studentName[30];
    char batchName[5];
    char mailId[30];
    char official_MailId[30];
    char enrollNo[5];
    int startYear;
    int endYear;
    char gender;

    struct Attendance
    {
        int totalClasses;
        int attendendClasses;
        float totalPercentage;
    }att;
};

struct Faculty
{
    char facultyName[30];
    char FmailId[30];
    char Fofficial_MailId[30];
    char ID[5];
    struct FAttendance
    {
        int Ftotalclasses;
        int Fattendendclasses;
        int Ftotalpercentage;
    };
    
    struct FDOB
    {
        int FDay;
        int FMonth;
        int FYear;
    };
    struct FDOJ
    {
        int fDay;
        int fMonth;
        int fYear;
    };
    
};

struct Student studentInfo()
{

    printf("Enter the number of records\n");
    scanf("%d", &noOfSRecords);

    struct Student s1[noOfSRecords];

    for (int i = 0; i < noOfSRecords; i++)
    {
        printf("\nEnter the name of student ->\t");
        scanf("%s",&s1[i].studentName);
        printf("\nEnter the name of Batch ->\t");
        scanf("%s",&s1[i].batchName);
        printf("\nEnter the e-mail ID ->\t");
        scanf("%s",&s1[i].mailId);
        printf("\nEnter the official mail ID ->\t");
        scanf("%s",&s1[i].official_MailId);
        printf("\nEnter the Enrollment number ->\t");
        scanf("%s",&s1[i].enrollNo);
        printf("\nEnter the Starting Year ->\t");
        scanf("%d",&s1[i].startYear);
        printf("\nEnter the End Year ->\t");
        scanf("%d",&s1[i].endYear);
        printf("\nEnter the gender ->\t");
        scanf(" %c",&s1[i].gender);

        printf("\nEnter the total number classes that has been schedule for this month ->\t");
        scanf("%d",&s1[i].att.totalClasses);
        printf("\nEnter the total number attdended classes of \"%s\" ->\t", s1[i].studentName);
        scanf("%d",&s1[i].att.attendendClasses);

        s1[i].att.totalPercentage = s1[i].att.attendendClasses/s1[i].att.totalClasses*100;

        Sreocrds++;

    }
    
    return s1[noOfSRecords];
}

int main()
{
    int a,b;
    struct Student s[noOfSRecords];
    struct Faculty f[noOfFRecords];

    printf("Enter 1 to start and 0 to exit :");
    scanf("%d", &b);

    while (b!=0)
    {
    printf("\nEnter what you want to do?\n");
    printf("\npress 1 to enter Student detials");
    printf("\npress 2 to see Student detials");
    printf("\npress 3 to enter Faculty detials");
    printf("\npress 4 to see Faculty detials");
    printf("\npress 5 to edit particular Student detials");
    printf("\npress 6 to edit particular Faculty detials\n");
    printf("press 0 to exit\n");
    printf("-> ");

    scanf("%d", &a);

    switch (a)
    {

        case 0:

            printf("\nExiting.....\n");

            break;

        case 1:
        
            s[noOfSRecords] = studentInfo();

            break;

        case 2:

            printf("\nStudent Name\tBatch Name\tMail-ID\tOfficial Mail-ID\tEnroll no.\tStart Year\tEnd Year\tGender\tTotal-Classes\tAttendend-Classes\tPercentage\n");

            for (int i = 0; i < noOfSRecords; i++)
            {

                printf("%s\t", s[i].studentName);
                printf("%s\t", s[i].batchName);
                printf("%s\t", s[i].mailId);
                printf("%s\t", s[i].official_MailId);
                printf("%s\t", s[i].enrollNo);
                printf("%d\t", s[i].startYear);
                printf("%d\t", s[i].endYear);
                printf("%c\t", s[i].gender);

                printf("%d\t", s[i].att.totalClasses);
                printf("%d\t", s[i].att.attendendClasses);
                printf("%f\t", s[i].att.totalPercentage);

            }

            break;
    
        default:
            break;
    }
    }//while loop end paranthesis

    return 0;
}