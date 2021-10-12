#include <stdio.h>
#include "function_lib.h"
#include "push_pop_lib.h"
int main(){
int size=10;
int main_stack[10]={0,0,0,0,0,0,0,0,0,0};
int stack_size;

//scanin numberss
start:

printf("Enter values, end with 0\n");

for(int i=0;i<size;++i){
    if(main_stack[i]==0)
    {
        scanf("%d",&main_stack[i]);    
            if(main_stack[i]>0)
                     stack_size=i+1;
            else
             {
                printf("stack size %d and top_number %d\n",stack_size,main_stack[i-1]);
                 break;
             }
    }
}   

printf("stack is ");
for(int i=0;i<stack_size;i++){
    if(main_stack>0)
         printf("%d ",main_stack[i]);
}
printf("\n");
int x,y,added;

x=pop_first(main_stack);
y=pop_first(main_stack);

added=multiply(x,y);


printf("lokal variabel x %d og y %d\n",x,y);

printf("stack is ");
for(int i=0;i<stack_size;i++){
    printf("%d  ",main_stack[i]);
}
printf("\n");

printf("now push %d\n",added);

push_first(main_stack,added);

printf("stack is ");
for(int i=0;i<stack_size;i++){
    printf("%d  ",main_stack[i]);
}
printf("\n");


goto start;


return 0;
}
