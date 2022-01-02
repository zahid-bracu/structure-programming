//insert an element into a specific position
#include <stdio.h>

int main()
{
    int pos=2;
    int n=6;
    int array[6]={11,22,44,55,66};
    
    for(int i=n-1;i>=pos;i--){
        array[i]=array[i-1];
    }
    array[pos]=33;
    for(int j=0;j<n;j++){
        printf("%d\n",array[j]);
    }

    return 0;
}
