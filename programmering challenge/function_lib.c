#include <stdio.h>
#include <stdlib.h>
#include "push_pop_lib.h"

//Arithmetics
//addition
double addition(double stack[])
{
double x; double y; double result;

x=pop(stack);
y=pop(stack);

result=x+y;

push(stack,result);

return result;
}

//subtraction
double subtraction(double stack[])
{
double x; double y; double result;

x=pop(stack);
y=pop(stack);


result=y-x;
push(stack,result);

return result;
}




double multiply(double stack[])
{
double x; double y; double result;

x=pop(stack);
y=pop(stack);


result=x*y;
push(stack,result);

return result;
}


double divide(double stack[])
{
double x; double y; double result;

x=pop(stack);
y=pop(stack);


result=y/x;
push(stack,result);

return result;
}

