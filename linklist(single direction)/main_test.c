#include<stdio.h>
#include"Linklist.h"

int main() {
	void printDIV();
	//create a direcition Linklist from 0 to 12
	Llist * root = newNode(0);
	for (int i = 1; i <= 12; i++) {
		addTail(root, i);
	}

	printf("root value :%d\n", root->data);
	printDIV();

	printf("root -> next:%d\n", readNode(root->next));
	printDIV();

	removeTail(root);
	printf("Head traversal:\n");
	Headtraversal(root);
	
	removeTail(root);
	printDIV();
	printf("Tail traversal:\n");
	Tailtraversal(root);

	printDIV();
	printf("the length of the Linklist is %d \n", geiNum(root));

	return 0;
}

void printDIV() {
	printf("\n\n");
	printf("-------------------------DIV--------------------------------------\n");
}
