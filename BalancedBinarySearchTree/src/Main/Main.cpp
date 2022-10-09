#include <BBST.h>

int main()
{
	int dataArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int dataArraySize = (int)(sizeof(dataArray) / sizeof(dataArray[0])) - 1;
	BBST balancedBinarySearchTree;
	balancedBinarySearchTree.PrepareTreeWithSortedDataArray(dataArray, dataArraySize);
	balancedBinarySearchTree.TraverseTree();
	return 0;
}