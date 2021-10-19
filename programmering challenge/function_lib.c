#include <stdio.h>
#include <stdlib.h>
#include "push_pop_lib.h"

//Arithmetics
//addition
int plus(int stack[])
{
int x; int y; int result;

x=pop_first(stack);
y=pop_first(stack);

result=x+y;

push_first(stack,result);


}

//subtraction
int minus(int stack[])
{
int x; int y; int result;

x=pop_first(stack);
y=pop_first(stack);


result=y-x;
push_first(stack,result);



}




int multiply(int x, int y){
    int result = x * y;
return result;
}
/*
int minus(int x, int y){
    int result = x - y;
return result;
}
*/
int divide(int x, int y){
    int result = x / y;
return result;
}

//Comparisons

int largerthan(int x, int y){
    int result = x;
        if(x<=y)
            result = y;
return result;
}

int smallerthan(int x, int y){
    int result = x;
        if(x>=y)
            result = y;
return result;
}