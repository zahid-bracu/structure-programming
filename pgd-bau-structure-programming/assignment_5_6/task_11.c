//Write a C program to input weekDay number and print weekDay day
#include <stdio.h>
int checkWeekDay(int weekDay){
    if(weekDay == 1){
        printf("Monday");
    }else if(weekDay == 2){
        printf("Tuesday");
    }else if(weekDay == 3){
        printf("Wednesday");
    }else if(weekDay == 4){
        printf("Thursday");
    }else if(weekDay == 5){
        printf("Friday");
    }else if(weekDay == 6){
        printf("Saturday");
    }else if(weekDay == 7){
        printf("Sunday");
    }else{
        printf("Wrong Input");
    }
}
int main(){   
    int weekDay;
    printf("Enter week day in number \n ");
    scanf("%d", &weekDay);
    checkWeekDay(weekDay);
    return 0;
}