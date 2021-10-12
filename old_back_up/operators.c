#include <stdio.h>

//Arithmetics

int plus(int x, int y){
    int result = x + y;
return result;
}

int multiply(int x, int y){
    int result = x * y;
return result;
}

int minus(int x, int y){
    int result = x - y;
return result;
}

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