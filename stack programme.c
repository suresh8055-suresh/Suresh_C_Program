#include<stdio.h>
#include<limit.h>
#define MAX_SIZE 20

int arr[MAX_SIZE];
int top = -1;

void push(int val){
  if(top == MAX_SIZE -1){
    printf("stack is full\n");
    return;
  }
  arr[++top] = val;  
}
 int pop(){
   if(top == -1){
     printf("stack is empty\n");
     return INT_MAIN;
 }
   return arr[top--];
 }

int peak(){
  if(top == -1){
    printf("stack is empty\n");
    return INT_MIN;
  }
  return arr[top];
}

int main(){
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);

  printf("after pushing 5 elements\n");
  printf("top elements is %d\n",peek());

  printf("popped elements is %d\n",pop());
  printf("popped elements is %d\n",pop());

  printf("after popping two elements:\n");
  peintf("top elements is %d\n",peek());

  return 0;
  }



