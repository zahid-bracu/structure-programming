
//Write a C program to count the total number of duplicate elements in an array.
#include <stdio.h>
int main()
{
    int array[10]={1,3,2,3,1,5,1,6,8,4};
    int count=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(array[i]==array[j]){
                count++;
            }
        }

    }
    printf("Total Duplicate value : %d\n",count);
    return 0;
}
