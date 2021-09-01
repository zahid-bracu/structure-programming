// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n;
    int sum=0;
    printf("Enter the n value \n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int data=i*i;
        sum=sum+data;
    }
    printf("%d",sum);
    return 0;
} 