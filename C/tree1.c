#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *left;
	struct Node *right;
} Node;

Node *root = NULL;

Node* createNewNode(int data) {
	Node *newNode = malloc(sizeof(Node));

	newNode -> data = data;

	newNode -> left = NULL;
	newNode -> right = NULL;

	return newNode;
}

void postOrder(Node *node) {
	if(!node)
		return;
	
	postOrder(node -> left);
	postOrder(node -> right);
	printf("%d -> ", node -> data);
}

void inOrder(Node *node) {
	if(!node)
		return;
	
	inOrder(node -> left);
	printf("%d -> ", node -> data);
	inOrder(node -> right);
}

void preOrder(Node *node) {
	if(!node)
		return;

	printf("%d -> ", node -> data);
	preOrder(node -> left);
	preOrder(node -> right);
}

int duckyCount(Node *node, int n) {
	if(!node)
		return n + 1;

	n = n + 1;
	duckyCount(node -> left, n);

	n = n + 1;
	duckyCount(node -> right, n);
}

int main() {
	Node *root = createNewNode(1);
	root -> left = createNewNode(2);
	root -> right = createNewNode(3);
	root -> left -> left = createNewNode(4);
	root -> left -> right = createNewNode(5);
	root -> right -> right = createNewNode(6);

	printf("preOrder\n");
	preOrder(root);

	printf("\npostOrder\n");
	postOrder(root);

	printf("\ninOrder\n");
	inOrder(root);

	printf("\n");

	printf("size: %d\n", duckyCount(root, 0));
}