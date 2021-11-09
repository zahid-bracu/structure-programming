// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    int flag=0;
    printf("Enter your number \n");
    scanf("%d",&num);
    if(num==1){
        printf("Not Prime");
    }else{
        for(int i=2;i<num;i++) 
        if(flag==1){
            printf("Not Prime");
        }else{
            printf("Prime");
        }
    }
    
    return 0;
}