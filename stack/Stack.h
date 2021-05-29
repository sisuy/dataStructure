#include<stdio.h>


typedef struct {
	int* stc;
	int size;
}Stack;

Stack init();

//push a value to stack
void push(Stack* stack, int value);

//get the size of the stack
int getsize(Stack stack);

//pop a value, and return it
int pop(Stack* stack);

//get the top element, but do not pop
int peek(Stack stack);

//clear all elements
void clearStack(Stack* stack);

//if the stack is empty then return 1
int isEmpty(Stack stack);
