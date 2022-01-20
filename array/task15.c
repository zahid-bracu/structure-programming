// Write a C program to merge two arrays to a third array.
#include <stdio.h>
int main() {
    int arrayOne[]={11,22,33,44};
    int arrayTwo[]={55,66,77,88};
    int countOne  = sizeof(arrayOne)/sizeof(arrayOne[0]); ;
    int countTwo  = sizeof(arrayTwo)/sizeof(arrayTwo[0]); ;
    int newArraySize=countOne+countTwo;
    int newArray[newArraySize];
    int pos=0;
    for(int i=0;i<countOne;i++){
        newArray[pos++]=arrayOne[i];

    }
    for(int i=0;i<countTwo;i++){
        newArray[pos++]=arrayTwo[i];
    }
    for(int i=0;i<newArraySize;i++){
        printf("%d \n",newArray[i]);
    }
    return 0;
}
