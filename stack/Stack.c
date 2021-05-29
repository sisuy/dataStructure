#include<stdio.h>
#include<stdlib.h>
#include"Stack.h"
#define TRUE 1
#define FALSE 0

Stack init() {
	Stack stack;
	stack.stc = (int*)malloc(0); //stack has no element in here in first
	stack.size = 0;
	return stack;
}

int getsize(Stack stack) {
	return stack.size;
}

void push(Stack* stack, int value) {
	int* temp = (int*)malloc(sizeof(int) * stack ->size);
	for (int i = 0; i < stack->size; i++) {
		temp[i] = stack->stc[i];
	}
	free(stack->stc);
	stack -> stc = (int*)malloc(sizeof(int) * (stack->size +1));

	for (int i = 0; i < stack->size; i++) {
		stack->stc[i] = temp[i];
	}
	stack->stc[stack->size] = value;
	stack->size = stack->size + 1;
}

int pop(Stack* stack) {
	if (stack->size == 0) {
		printf("pop:the stack is empty.\n");
		return 0;
	}
	int value = stack->stc[getsize(*stack) - 1];

	int* temp = (int*)malloc(sizeof(int) * (stack->size - 1));
	free(stack->stc);
	stack->stc = (int*)malloc(sizeof(int) * (stack->size - 1));
	stack->size--;

	for (int i = 0; i < stack->size; i++) {
		stack->stc[i] = temp[i];
	}

	return value;
}

int peek(Stack stack) {
	if(stack.size != 0) return stack.stc[stack.size - 1];
	printf("peek:the stack is empty.");
	return 0;
}

void clearStack(Stack* stack) {
	free(stack ->stc);
	stack->stc = (int*)malloc(0);
	stack->size = 0;
}

int isEmpty(Stack stack) {
	if (stack.size == 0) {
		return TRUE;
	}
	return FALSE;
}