#include <stdio.h>
#include <stdlib.h>
#include "push_pop_lib.h"

//Arithmetics
//addition
int addition(int stack[])
{
int x; int y; int result;

x=pop_first(stack);
y=pop_first(stack);

result=x+y;

push_first(stack,result);

return result;
}

//subtraction
int subtraction(int stack[])
{
int x; int y; int result;

x=pop_first(stack);
y=pop_first(stack);


result=y-x;
push_first(stack,result);

return result;
}




int multiply(int stack[])
{
int x; int y; int result;

x=pop_first(stack);
y=pop_first(stack);


result=x*y;
push_first(stack,result);

return result;
}


int divide(int stack[])
{
int x; int y; int result;

x=pop_first(stack);
y=pop_first(stack);


result=y/x;
push_first(stack,result);

return result;
}
