#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter the number");
    scanf("%s",str);
    
    int l=0;
    int r=strlen(str)-1;
    int flag=1;
    while(r>l){
        if(str[l++]!=str[r--]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("p");
    }else{
        printf("not p");
    }
}