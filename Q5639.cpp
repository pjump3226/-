#include <iostream>
using namespace std;

class Node {
public:
	int value;
	Node* left;
	Node* right;
};

Node* insertTree(Node* root, int val) {
	if (root == NULL) {
		root = new Node();
		root->value = val;
		root->left = root->right = NULL;
	}
	else if (val < root->value ) {
		root->left = insertTree(root->left, val);
	}
	else {
		root->right = insertTree(root->right, val);
	}
	return root;
}

void printTree(Node* root) {
	if (root->left != NULL) {
		printTree(root->left);
	}
	if (root->right != NULL){
		printTree(root->right);
	}
	cout << root->value << '\n';
}	

int main() {
	int num;
	Node* root = NULL;
	while (cin >> num) {
		if (num == EOF) break;
		root = insertTree(root, num);
	}
	printTree(root);
	return 0;
}