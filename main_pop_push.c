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
            array[i-1]=0;
            printf("operation array %d\n",array[i-1]);
            return first;
        }
}

int main(){
int size=10;
int main_stack[10]={0,0,0,0,0,0,0,0,0,0};
int stack_size;

//scanin numbers

printf("Enter values, end with 0\n");

for(int i=0;i<size;++i){
    int x;
    scanf("%d",&main_stack[i]);
    
    if(main_stack[i]>0)
        stack_size=i+1;
        
    else{
        printf("stack size %d and top_number %d\n",stack_size,main_stack[i-1]);
        break;
        }
}

printf("stack is ");
for(int i=0;i<stack_size;i++){
    printf("%d ",main_stack[i]);
}
printf("\n");
int x,y,added;

x=pop_first(main_stack);
y=pop_first(main_stack);
added=x+y;


printf("lokal variabel x %d og y\n",x,y);

printf("stack is ");
for(int i=0;i<stack_size;i++){
    printf("%d  ",main_stack[i]);
}
printf("\n");

printf("now push\n");

push_first(main_stack,added);

printf("stack is ");
for(int i=0;i<stack_size;i++){
    printf("%d  ",main_stack[i]);
}

return 0;
}