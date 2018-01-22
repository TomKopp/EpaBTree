#include "stdafx.h"

int main()
{
	//t = create_btree();
	//t->root = createNode(30);
	//t = insertElementIntoTree(
	//	insertElementIntoTree(
	//		insertElementIntoTree(
	//			createBTree(30)
	//			, 38)
	//		, 42)
	//	, 10);
	//insertElementIntoTree(t, 35);

	//save_btree("D:\\Projects\\EPA\\B-Tree\\svg\\test.svg", t);

	Node* bTree = createBTree();

	printf("Hello World\n");

	// Windows only:
	//system("pause");
	// Linux alternative:
	printf("Press any key to continue . . .");
	getchar();

	return 0;
}
