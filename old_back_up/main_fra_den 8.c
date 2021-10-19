#include <stdio.h>
#include "function_lib.h"
#include "push_pop_lib.h"
int main(){
int size=10;int stack_size;
int main_stack[10]={0,0,0,0,0,0,0,0,0,0};
char func_stack[9]={0,0,0,0,0,0,0,0,0};

//scanin numbers
start:

printf("Enter values, if you want to use a fuction type 0\n");

//runs a scan function the size of the array
enter:
for(int i=0;i<size;++i){
    if(main_stack[i]==0)
    {
        scanf("%d",&main_stack[i]);    
            if(main_stack[i]>0)
                     stack_size=i+1;
            else
             {
                printf("stack size %d and top_number %d\n\n",stack_size,main_stack[i-1]);
                break;
             }
    }
}
printf("Now enter your function (-+*/)\n End with C for calculation or E for entering more numbers\n" );
for (int i = 0; i < size-1; i++)
{
    if(func_stack[i]==0)
    {
        scanf("%c",&func_stack[i]);
        
        printf("%i check 1\n",i);
        
        printf("func_stack is %c i=%d\n",func_stack[i],i);

        if(func_stack[i]=='c'||func_stack[i]=='C')
            {
            printf("break\n");
            break;
            }
        if(func_stack[i]=='e'||func_stack[i]=='E')
            {
            printf("enter\n");
            goto enter;
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
