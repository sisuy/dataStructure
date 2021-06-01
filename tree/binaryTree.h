//the node sturct should contain the value it store, and 2 children(left and right) 
struct Nd{
	int value;
	int deep;
	struct Nd* l_child;
	struct Nd* r_child;
	};
typedef  struct Nd Node;

//create a new node
Node * newNode(int * value);

//return 1 if the node has children
int hsaChild(Node* node);

//display the tree
void display(Node* node);

//add child to a node
void addChild(Node* node, int value);

//Inorder Traversal (LDR) left -> root -> right
void LDRTree(Node* node);

//preorder Traversal(VLR) root ->left ->right
void VLRTree(Node* node);

// Postorder Traversal (LRD) left->right -> root
void LRDTree(Node* node);

//return the number of leaf
int returnLeaves(Node* node, int i);

//number of node
int nodeNum(Node* node,int i);