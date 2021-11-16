#include <stdio.h>


main(void){


int stack[5]={5,0,0,0,0};
int value=7;


for(int i=0;i<10;i++)
        if(stack[i]==0){
            stack[i]=value;
            break;
        }
value=4;
for(int i=0;i<10;i++)
        if(stack[i]==0){
            stack[i]=value;
            break;
        }

printf("%d %d %d\n",stack[0],stack[1],stack[2],stack[3]);

int first;
for(int i=0;i<10;i++)
        if(stack[i]==0){
            first=stack[i-1];
            stack[i]=0;
            break;

}

printf("%d %d %d %d pop_funktion %d",stack[0],stack[1],stack[2],stack[3],first);
return 0;

}