// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n;
    int sum=0;
    printf("Enter the n value \n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}