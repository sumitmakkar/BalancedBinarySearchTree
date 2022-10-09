#include <BBST.h>

// Private Methods
Node* BBST::CreateNewNode(int value, Node* left, Node* right)
{
	return new Node(value, left, right);
}

Node* BBST::CreateTree(int* dataArray, int start, int end)
{
	if (start > end) { return NULL; }
	int mid				   = (start + end) / 2;
	Node* currentRootNode  = CreateNewNode(dataArray[mid]);
	currentRootNode->left  = CreateTree(dataArray, start, mid - 1);
	currentRootNode->right = CreateTree(dataArray, mid + 1, end);
	return currentRootNode;
}

void BBST::InorderTraversal(Node* node)
{
	if (!node) { return; }
	InorderTraversal(node->left);
	std::cout << node->value << " ";
	InorderTraversal(node->right);
}


// Public Methods
void BBST::PrepareTreeWithSortedDataArray(int* dataArray, int dataAraySize)
{
	rootNode = CreateTree(dataArray, 0, dataAraySize);
}

void BBST::TraverseTree()
{
	std::cout << "InorderTraversal" << std::endl;
	InorderTraversal(rootNode);
	std::cout << std::endl;
}