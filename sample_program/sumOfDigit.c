#include <stdio.h>
int main() {
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    int sum=0;
    while(num>0){
        int value=num%10;
        sum=sum+value;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}