#include<stdio.h>
#include"Stack.h"

int main() {
	Stack stack = init();
	printf("size:%d\n",getsize(stack) );

	Stack * p = &stack;
	push(p, 3);
	printf("size:%d\n", getsize(stack));
	printf("push 3 to stack.\n");
	
	clearStack(p);
	int num = pop(p);
	printf("pop = %d\n\n",num);

	printf("size:%d\n", getsize(stack));

	

	return 0;
}