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
            first=array[i-1];
            array[i]=0;
            return first;
        }
}

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

int main(void){
int size=10;
int main_stack[10]={0,0,0,0,0,0,0,0,0,0};
int x;
int y;
//scanin numbers

printf("Enter values, end with 0\n");

for(int i=0;i<size;i++){
    scanf("%d\n",&main_stack[i]);
    if(main_stack[i]==0);
        i=size-1;
}



//calls push functions
push_first(main_stack,x);
push_first(main_stack,y);
for(int i=0;i<size;i++){
printf(" %d , %d",main_stack[0],main_stack[1]);
return 0;
}