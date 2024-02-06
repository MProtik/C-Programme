#include <stdio.h>

#define max 4

int stack_arr[max];
int top = -1;
int push(int data){
    top = top + 1;
    stack_arr[top] = data;
}
int pop(){
    stack_arr[top] = 0;
}

int main(){
    push(1);
    push(2);
    push(8);
    pop();
    push(4);
    push(9);
    for(int i=0; i<max ; i++){
        printf("%d", stack_arr[i]);
    }

return 0;
}

