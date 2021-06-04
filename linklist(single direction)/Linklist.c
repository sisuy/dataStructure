#include<stdio.h>
#include"Linklist.h"

Llist * newNode(int data) {
	Llist * node = (Llist*)malloc(sizeof(Llist));
	node->data = data;


	node->next = (Llist*)malloc(sizeof(Llist));
	node->next = NULL;

	return node;
}

int addLink(Llist* head, Llist* tail) {
	//2 nodes won't be  the empty node
	if (tail == NULL || head == NULL ) {
		printf("Wrong Node (addLink)\n");
		return False;
	}
	head->next = tail;
	return True;
}

int readNode(Llist* node) {
	if (node != NULL) {
		return node->data;
	}
	else {
		printf("readNode:the node data is NULL\n");
		return -1;
	}
}

void  Headtraversal(Llist* node) {
	if (node == NULL) {
		printf("-> -1 ");
		return;
	}
	printf("-> %d ", readNode(node));

	Headtraversal(node->next);
}

void Tailtraversal(Llist* node) {
	if (node == NULL) {
		printf("-> -1 ");
		return;
	}

	//traversal first and print second
	Tailtraversal(node->next);
	printf("-> %d ", readNode(node));
}

void addTail(Llist* node, int i) {
	if (node->next == NULL) {
		addLink(node, newNode(i));
		return;
	}

	addTail(node->next, i);
}

void removeTail(Llist* node) {
	if (node->next == NULL) {
		node->data = NULL;
		node->next = NULL;
		node = NULL;
		return;
	}
	removeTail(node->next);
}

int geiNum(Llist* node) {
	int i = 0;
	if (node != NULL) {
		i++;
		int rest = geiNum(node->next);
		return i + rest;
	}
	else {
		return 0;
	}
}