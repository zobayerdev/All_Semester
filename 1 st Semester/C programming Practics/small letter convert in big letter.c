#include<stdio.h>
int main()
{
    char lower,upper ;
    // Upper to lower convert code:
    printf("Enter Any uppercase Number : " );
    scanf("%c",  & upper);
    lower = tolower (upper);
    printf("Your Result : %c ",lower);

   //lower to Upper convert code:
    upper = toupper (lower);
    printf("\nYour Result : %c ",upper);


    return 0;

}
