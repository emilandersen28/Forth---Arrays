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
            printf("hej");
            first=array[i-1];
            array[i]=0;
            printf("array = %d",array[i]);
            return first;
        }
}

int main(void){
int stack[10]={5,3,0,0,0,0,0,0,0,0};
int *(stack_pointer+i)=stack;

int x=4,y=3;

pop_first(stack_pointer);
pop_first(stack);

printf("%d  %d\n",stack[0],stack[1]);

int q,w;
q=pop_first(stack);

printf("%d  %d q is %d",stack[0],stack[1],q);

}