#include<stdio.h>
#include<stdlib.h>
#include"array.h"

Array init(int size) {
	Array array;
	array.size = size;
	array.arr = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		array.arr[i] = i;
	}
	return array;
}

int get(Array* array, int position) {
	int size = array->size;
	if (position < size && position >= 0) {
		return array->arr[position];
	}else{
		printf("get:the index is wrong\n");
		return 0;
	}
}

void swap(Array* array, int pre, int aft) {
	int size = array->size;
	if (pre >= 0 && pre < size && aft >= 0 && aft < size) {
		int temp = array->arr[pre];
		array->arr[pre] = array->arr[aft];
		array->arr[aft] = temp;
	}else{
		printf("swap:wrong index\n");
	}
}

void insert(Array* array, int position, int value) {
	int size = array->size;
	if (position >= 0 && position < size) {
		array->arr[position] = value;
	}
	else {
		printf("insert:wrong index");
	}
}

void removeValue(Array* array, int position) {
	int size = array->size;
	if (position >= 0 && position < size) {
		array->arr[position] = 0;
	}
	else {
		printf("remove:wrong index.\n");
	}
}

void reverseArray(Array* array) {
	for (int i = 0; i <= (array->size - 1) / 2; i++) {
		int temp = array->arr[i];
		array->arr[i] = array->arr[array->size - i-1];
		array->arr[array->size - i-1] = temp;
	}
}

int  getMax(Array* array) {
	int max = 0;
	for (int i = 0; i < array->size; i++) {
		if (array->arr[i] > max) {
			max = array->arr[i];
		}
	}
	return max;
}

int  getMin(Array* array) {
	int min = 0;
	for (int j = 0; j < array->size; j++) {
		if ((array->arr[j]) < min) {
			min = array->arr[j];
		}
	}
	return min;
}

void increase(Array* array, int increasement) {
	int* temp = (int*)malloc(sizeof(int) * array->size); //store the array information
	for (int i = 0; i < array->size; i++) {
		temp[i] = array->arr[i];
	}
	free(array->arr); // free the ram of array
	
	array->arr = (int*)malloc(sizeof(int) * (array->size + increasement) );
	
	for (int i = 0; i < array->size; i++) {
		array->arr[i] = temp[i];
	}
	
	for (int i = array->size; i < array->size + increasement; i++) {
		array->arr[i] = 0;
	}
	array->size = array->size + increasement;
	for (int i = 0; i < array->size; i++) {
	}
}

void decrease(Array* array, int decreasement) {
	int* temp = (int*)malloc(sizeof(int) * array->size);
	array->size = array->size - decreasement;
	for (int i = 0; i < array->size; i++) {
		temp[i] = array->arr[i];
	}

	free(array->arr);
	array->arr = (int*)malloc(sizeof(int) * array->size);

	for (int i = 0; i < array->size; i++) {
		array->arr[i] = temp[i];
	}
}

void printArray(Array array) {
	for (int i = 0; i < array.size; i++) {
		printf("%d\n", array.arr[i]);
	}
}