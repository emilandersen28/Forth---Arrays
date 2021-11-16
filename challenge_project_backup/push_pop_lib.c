#include <stdio.h>
#include "push_pop_lib.h"


//adds a variable to the first place that is 0 in an array
int push_first(int array[],int value){
//runs array until it incounter 0 then saves a value in that place
    for(int i = 0; i < 10; i++)
        if(array[i] == 0)
        {
            array[i] = value;
            return 0;
        }
}
//saves the last variable bigger than 0 in an array and returns the variable
int pop_first(int array[]){
int first;
//runs array until incounter 0
    for(int i=0;i<10;i++)
        if(array[i]==0){
        //then saves the array plave just before 0, resets it to 0.
            first=array[i-1];
            array[i-1]=0;
            return first;
        }
}
