#include <stdio.h>
#include "function_lib.h"
#include "push_pop_lib.h"
int main()
{
    int size=10; int stack_size=0; int func_count=0;
    int main_stack[10]={0,0,0,0,0,0,0,0,0,0};
    char func_stack[9]={0,0,0,0,0,0,0,0,0};

//scanin numbers
start:

printf("Enter values, if you want to use a fuction type 0\n");

enter:
//runs a scan function the size of the array

    for(int i=0;i<size;++i)
    {
//scan a new number if the place in array is emty
        if(main_stack[i]==0)
        {
            scanf("%d",&main_stack[i]);    

            //scans if theres stil place in array else and its a value over 0
                if(main_stack[i]>0)
                        stack_size=i+1;
            //if 0 is entered breaks loop and prints stack
                else
                    {
                    printf("stack is ");
                    for(int i=0;i<stack_size;i++)
                        {
                            if(main_stack>0)
                                printf("%d ",main_stack[i]);
                        }
                    printf("\n");
                    break;
                    }
        }
    }
//scanin the function +-*/ etc.
    printf("Now enter your function (-+*/r)\n End with C for calculation\n" );

    for (int i = 0; i < size-1; i++)
    {
//scans a function if place in array is emty
        if(func_stack[i]==0)
        {
            //dont know why it needs double scan for char but it works
            scanf("%c",&func_stack[i]);
            scanf("%c",&func_stack[i]);

            //adds 1 to func_count bc fourth is read from right to left. 
            //Therefore the function loop must be read from top place of func array to first place.
            func_count++;
            
            //C for calculate is used to break the scanin loop and go to calculation
            if(func_stack[i]=='c'||func_stack[i]=='C')
                {
                printf("break\n");
                func_stack[i]=0;
                break;
                }
        }
    }


printf("\n");
printf("now calculations\n");

//function loop that runs backwards.
for (unsigned i = func_count-1 ; i-- > 0 ; )
    {
//precondition funtion with the need of to variable shouldnt be able to run with only one variable.
        if(stack_size>1)
        {
            //switch statement to switch between operations
            switch (func_stack[i])
            {
                case '+':
                    {
                        
                        int zero_outcome = addition(main_stack);
                        
                        func_stack[i]=0;

                        stack_size--;

                        if(zero_outcome==0)
                        stack_size--; 

                        
                        break;             
                    } 

                case '-':
                    {
                        //zero outcome used for if statement.
                        int zero_outcome = subtraction(main_stack);

                        stack_size--;
                        //if the outcome of a subtration is 0 array size should go down by one

                        if(zero_outcome==0)
                        stack_size--; 

                        func_stack[i]=0;
                    
                        break;
                    }
                case '*':
                    {
                        multiply(main_stack);

                        stack_size--;

                        func_stack[i]=0;

                        break;
                    }
                
                case '/':
                    {
                        divide(main_stack);

                        stack_size--;

                        func_stack[i]=0;

                        break;
                    }
                case 'r':
                    {
                        pop_first(main_stack);

                        stack_size--;

                        func_stack[i]=0;
                        
                        break;
                    }

            }
        }    
    }
printf("stack size %d\n stack is ",stack_size);
for(int i=0;i<stack_size;i++)
    {
        if(main_stack>0)
            printf("%d ",main_stack[i]);
    }
printf("\n");
goto start; 

return 0;
}