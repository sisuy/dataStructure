#include<stdio.h>
#include"binaryTree.h"

int main() {
	void printMessage();


	//create the root
	Node* root = newNode(1);
	addChild(root, 2);
	addChild(root, 3);
	addChild(root->l_child, 4);
	addChild(root->l_child, 5);
	addChild(root->r_child, 6);
	addChild(root->r_child, 7);

	//Inorder traversal(LDR)
	printf("inorder:\n");
	LDRTree(root);

	printf("-----------------------------DIV-------------------------------\n");
	printf("preorder:\n");
	VLRTree(root);

	printf("-----------------------------DIV-------------------------------\n");
	printf("postorder:\n");
	LRDTree(root);

	printf("-----------------------------DIV-------------------------------\n");
	 int leaves = returnLeaves(root,0);
	printf("the number of leaves is:%d\n", leaves);

	printf("-----------------------------DIV-------------------------------\n");
	int allNode = nodeNum(root, 0);
	printf("Node num is :%d\n",allNode);
	return 0;
}
