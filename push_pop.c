#include <stdio.h>

int push_first(int array[],int value){
    for(int i=0;i<10;i++)
        if(array[i]==0){
            array[i]=value;
            return 0;
        }
}

int pop_first(int array[]){
int first;
    for(int i=0;i<10;i++)
        if(array[i]==0){
            first=array[i-1];
            array[i]=0;
            return first;
        }
}

