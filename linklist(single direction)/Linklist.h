#include<stdio.h>
#include<stdlib.h>
#define True 1 
#define False  -1

/// <summary>
/// this is a single direction Linklist
/// </summary>
typedef struct Linklist {
	int data;
	struct Linklist *next;
}Llist;

//init a link
Llist * newNode(int data);

//add link to another link
int addLink(Llist* head, Llist* tail);

//read data from a node
int readNode(Llist* node);

//traversal the Linklist from head to tail,the finished one print -1
void Headtraversal(Llist* node);

//traversal the Linklist from tail to tail,the finished one print -1
void Tailtraversal(Llist* node);

//add a new node to the tail of this linklist
void addTail(Llist* node, int i); 

//delete the final node from this linklist
void removeTail(Llist* node);

//get the length of this linklist
int geiNum(Llist * node);

