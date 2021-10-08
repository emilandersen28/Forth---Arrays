#include <stdio.h>

int addition(int x, int y){
    int result = x + y;
return result;
}

int multiplication(int x, int y){
    int result = x * y;
return result;
}

int subtraction(int x, int y){
    int result = x - y;
return result;
}

int subtraction(int x, int y){
    int result = x / y;
return result;
}

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