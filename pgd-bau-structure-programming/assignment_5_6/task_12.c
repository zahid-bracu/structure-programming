// Write a C program to input month number and print number of days in that month.
#include <stdio.h>
int checkDaysInMonth(int month){
    int array[12]={31,28,31,30,31,30,31,31,30,31,30,31},m; 
    if(month>12 || month<1){
     printf("Wrong month number");
    }else if(month==2){
        printf("Number of days in month february is either 29 or 28");
    }else{
     printf("Number of days in month %d is %d",month,array[month-1]);   
    }
}
int main()
{
    int month;
    printf("Enter the month number \n");
    scanf("%d",&month);
    checkDaysInMonth(month);
 
}