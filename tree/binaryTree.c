#include<stdio.h>
#include"binaryTree.h"
#include<stdlib.h>

Node* newNode(int* value) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->deep = NULL;
	node->value = value;
	node->l_child = NULL;
	node->r_child = NULL;
	return node;
}

void display(Node* node) {
	if (node == NULL) { return; }
	if (hsaChild(node) == 0) {
		for (int i = 0; i < node->deep; i++) {
			printf("\t");
		}
		printf("%d\n", node->value);
		return;
	}
	//print value in this node
	for (int i = 0; i < node->deep; i++) {
		printf("\t");
	}
	printf("%d\n", node->value);

	//go through left tree
	if (node->l_child != NULL) {
		display(node->l_child);
	}
	//go through right tree
	if (node->r_child != NULL) {
		display(node->r_child);
	}
}

int hsaChild(Node* node) {
	if (node->l_child != NULL || node->r_child != NULL) {
		return	1;
	}
	else {
		return 0;
	}
}

void addChild(Node* node,int value) {
	Node* child = newNode(value);
	child->deep = node->deep  + 1;

	if (node->l_child == NULL) {
		node->l_child = child;
	}
	else {
		node->r_child = child;
	}
}

//Inorder Traversal (LDR) left ->root->right
void LDRTree(Node* node) {
	if (node == NULL) { return; }
	if (hsaChild(node) == 0) {
		for (int i = 0; i <= node->deep; i++) {
			printf("\t");
		}
		printf("%d\n", node->value);
		return;
	}
	//traversal left subtree first, then print this node,finally traversal right tree
	LDRTree(node->l_child);
	for (int i = 0; i <= node->deep; i++) {
		printf("\t");
	}
	printf("%d\n", node->value);
	LDRTree(node->r_child);
}

//preorder Traversal(VLR)  lroot ->left ->right
void VLRTree(Node* node) {
	if (node == NULL) { return; }
	//set exit
	if (hsaChild(node) == 0) {
		for (int i = 0; i <= node->deep; i++) {
			printf("\t");
		}
		printf("%d\n", node->value);
		return;
	}

	//root -> left ->right
	for (int i = 0; i <= node->deep; i++) {
		printf("\t");
	}
	printf("%d\n", node->value);

	VLRTree(node->l_child);
	VLRTree(node->r_child);
}

// Postorder Traversal (LRD) left->right -> root
void LRDTree(Node* node) {
	if (node == NULL) { return; }
	if (hsaChild(node) == 0) {
		for (int i = 0; i <= node->deep; i++) {
			printf("\t");
		}
		printf("%d\n", node->value);
		return;
	}
	LRDTree(node->l_child);
	LRDTree(node->r_child);
	for (int i = 0; i <= node->deep; i++) {
		printf("\t");
	}
	printf("%d\n", node->value);
}

//return the number of leaf
int returnLeaves(Node* node, int i) {
	if (node == NULL) { return; }
	if (hsaChild(node) == 0) {
		i++;
		return i;
	}
	int left = returnLeaves(node->l_child, 0);
	int right =returnLeaves(node->r_child,0);
	return left + right;
}

//number of node
int nodeNum(Node* node,int i) {
	if (node == NULL) { return; }
	if (hsaChild(node) == 0) {
		return 1;
	}
	int left = nodeNum(node->l_child, 0);
	int right = nodeNum(node->r_child, 0);
	return left + right + 1;
}