#include <stdio.h>


int main(void){
int size=10;
int main_stack[10]={0,0,0,0,0,0,0,0,0,0};
int stack_size;

//scanin numbers

printf("Enter values, end with 0\n");

for(int i=0;i<size;i++){
    scanf("%d\n",&main_stack[i]);
    stack_size=i+1;
    if(main_stack[i]==0);
        i=size-1;
}

for(int i=0;i<stack_size;i++){
    printf("%d",main_stack[i]);
}
//calls push functions
/*
push_first(main_stack,x);
push_first(main_stack,y);
for(int i=0;i<size;i++){
printf(" %d , %d",main_stack[0],main_stack[1]);
*/
return 0;
}