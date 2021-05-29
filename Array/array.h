#include<stdio.h>

typedef struct {
	int* arr;
	int size;
}Array;

//get a initial array
Array init(int size);

//get the value in index
int get(Array* array, int index);

//insert the value in a positon
void insert(Array* array, int position, int value);

//remove the value in position
void removeValue(Array* array, int position);

//reverse the array
void reverseArray(Array* array);

//get the maximum in this array
int  getMax(Array* array);

//get the minimum in this array
int  getMin(Array* array);

//increase the length of the array
void increase(Array* array, int increasement);

//decrease the length of the array
void decrease(Array* array, int decreasement);

//print all the value in array
void printArray(Array array);
