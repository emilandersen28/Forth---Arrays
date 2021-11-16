
void push(int stack[], int *top, int value)
{
    stack[*top] = value;
    *top = *top + 1;
}

int main(void)
{

    int max_size = 10;
    int stack_top=0; 
    int main_stack[10]={0,0,0,0,0,0,0,0,0,0};
    

    push(main_stack, &stack_top, 45);
    push(main_stack, &stack_top, 25);




    return 0;
}