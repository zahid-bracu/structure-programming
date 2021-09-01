// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n;
    int flag=1;
    printf("Enter the n value \n");
    scanf("%d",&n);
    
    if(n==1 || n==0 || n==2){
        printf("Prime");
    }else{
        for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("Not Prime");
        }else{
            printf("Prime");
        }
    }
    return 0;
}