#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number you want to reverse: ");
    scanf("%d", &num);
    int digit = 0;
    while (num > 0)
    {
        int rem = num % 10;
        digit = (digit * 10) + rem;
        num = num / 10;
    }
    printf("Reverse Number %d", digit);
    /*
    Explaination
    The loop will work if the number is bigger than 0
    for example the number entered by user is 123
    123 is bigger than 0, so it will go inside the loop;
    int rem is for the remainder and " % " is used for calculating remainder of a number
    so... step 1: int rem = num % 10;
                rem = 123 % 10; rem will  be 3;
          step 2: digit = (digit * 10) + rem;
                  digit = 0 * 10 + 3;
                  digit will be 3;
         step 3: num = num/10
                num = 123/10
                num will be 12;
         step 4: as num will be 12;
                rem will be
                rem = 12 % 10; here rem will be 2;
         step 5: as the new value of digit is 3 ( in step 2);
                 now digit will be
                 digit = 3 * 10 + 2;
                 digit will be 32;
        ( yrr kya bakwas explaination hai....Nidhi koi video dhek le)
    */
    return 0;
}
