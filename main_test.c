#include<stdio.h>
#include"array.h"

int main() {
	Array array = init(10);
	Array* p = &array;

	printf("origin:position3:%d\n",get(p,3));
	
	swap(p, 1, 3);
	printf("swap:position3:%d\n", get(p, 3));
	
	insert(p, 3,10);
	printf("insert:position3:%d\n", get(p, 3));
	
	removeValue(p, 3);
	printf("insert:position3:%d\n", get(p, 3));

	reverseArray(p);
	printf("insert:position3:%d\n", get(p, 3));

	printf("Max:%d\n", getMax(p));
	printf("Min:%d\n", getMin(p));

	increase(p, 10);
	printArray(array);

	decrease(p,10);
	printArray(array);

	return 0;
}