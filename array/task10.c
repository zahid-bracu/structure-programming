//delete an element from a specific index
#include <stdio.h>
int main()
{
    int pos=2;
    int n=6;
    int array[6]={11,22,33,44,55,66};
    
    for(int i=pos;i<n;i++){
        array[i]=array[i+1];
    }
    array[n-1]=0;
    for(int j=0;j<n;j++){
        printf("%d\n",array[j]);
    }

    return 0;
}
