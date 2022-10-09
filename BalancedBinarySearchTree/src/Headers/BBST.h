#pragma once

#include <iostream>

typedef struct Node_Structure
{
	int					   value;
	struct Node_Structure* left;
	struct Node_Structure* right;

	struct Node_Structure(int l_val, struct Node_Structure* l_left, struct Node_Structure* l_right) : value(l_val), left(l_left), right(l_right) {}
}Node;

class BBST
{
	private:
		Node* rootNode = NULL;
		
	private:
		Node* CreateNewNode(int value, Node* left = NULL, Node* right = NULL);
		Node* CreateTree(int* dataArray, int start, int end);
		void  InorderTraversal(Node* node);

	public:
		void PrepareTreeWithSortedDataArray(int* dataArray, int dataAraySize);
		void TraverseTree();
};