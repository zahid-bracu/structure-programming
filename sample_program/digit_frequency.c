// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);
    int array[]={0,0,0,0,0,0,0,0,0,0};
    while(num>0){
        int rem=num%10;
        array[rem]=array[rem]+1;
        num=num/10;
    }
    
    for(int i=0;i<10;i++){
        printf("%d is presented %d times \n",i,array[i]);
    }
    
    return 0;
}