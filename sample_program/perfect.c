// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);
    int i=1;
    int sum=0;
    while(i<num){
        if(num%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(sum==num){
        printf("Perfect");
    }else{
        printf("Not Perfect");
    }
    return 0;
}
