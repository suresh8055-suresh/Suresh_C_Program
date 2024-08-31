#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

#define MAX_SIZE 20

struct Stack{
int *arr;
int top;
int size;
};

void intstack(struct Stack *stack,int size){
  stack->arr = (int *)malloc(size * sizeof(int));
  stack->top = -1;
  stack->size = size;
}

void push(struct Stack *stack,int val){
  if(stack->top == stack->size -1){
    printf("stack is full\n");
    return;
  }
  stack->arr[++stack->top]=val;
}

int pop(struct Stack *stack){
  if(pop == -1){
    printf("stack is empty\n");
    return;
    
  }
}

 int peek(struct Stack *stack){
   if(stack->top == -1){
     printf("stack is empty\n");
     return INT_MIN;
   }
   return satck->arr[stack->top];
 }

 void freestack(struct *stack){
   freestack->arr;
   }

int main(){
  struct stack stack1,stack2;
  initstack(&stack1,MAX_SIZE);
  initstack(&stack2,MAX_SIZE);

  push(&stack1, 10);
  push(&stack1, 20);
  push(&stack1, 30);
  push(&stack1, 40);
  push(&stack1, 50);

  push(&stack2, 100);
  push(&stack2, 200);
  push(&stack2, 300);

  printf("popped from stack1: %d\n",pop(&stack1));
  printf("popped from stack1: %d\n",pop(&stack1));

  printf("top of the stack2: %d\n",peek(&stack2));

  freestack(&stack1);
  freestack(&stack2);

  return 0;
}

