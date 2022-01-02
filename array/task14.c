#include <stdio.h>
int main()
{
    int array[10]={1,3,2,3,1,5,1,6,8,4};
    
    for(int i=0;i<10;i++){
        int count=0;
        for(int j=0;j<10;j++){
            if(array[i]==array[j]){
                count++;
            }
        }
        if(count>1){
            array[i]=0;
        } 
    }
    int count=0;
    for(int i=0;i<10;i++){
        if(array[i]!=0){
            count++;
        }
    }
    
    int copyArray[count];
    int k=0;
    for(int i=0;i<10;i++){
        if(array[i]!=0){
            copyArray[k++]=array[i];
        }
    }
    
    for(int i=0;i<k;i++){
        printf("%d\n",copyArray[i]);
    }
    return 0;
}
