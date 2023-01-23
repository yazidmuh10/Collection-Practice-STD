#include "Tree.h"

using namespace std;

int main()
{
    adrNode BST;
    BST = NIL;
    adrNode root;
    int x[12] = {6,3,8,1,5,7,9,0,2,4,15,11};
    int i=0;
    cout << "================================================================================"<<endl;
    while(i < 12){
        cout<<x[i]<<" ";
        root = newNode_1303213026(x[i]);
        insertNode_1303213026(BST,root);
        i++;
    }
    cout <<endl;


    printf("\n");
    printf("In Order\t\t: ");
    printInOrder_1303213026(BST);

    printf("\nPre Order\t\t: ");
    printPreOrder_1303213026(BST);

    printf("\nPost Order\t\t: ");
    printPostOrder_1303213026(BST);

    printf("\n");
    printf("\nMost Left\t\t: ");
    MostLeft(BST);

    printf("\nMost Right\t\t: ");
    MostRight(BST);

    printf("\nMost Ancessor 4\t\t: ");
    printAncestor(BST,4);

    printf("\n");
    printf("\nDescendent of Node 3\t: ");
    int y = 3;
    printDescendant_1303213026(BST,y);

    printf("\nSum of BST Info\t\t: ");
    int n = sumNode_1303213026(BST);
    cout << n;

    printf("\nNumber of Leaves\t: ");
    int j = countLeaves_1303213026(BST);
    cout << j;

    printf("\nNumber of Node\t\t: ");
    j = numberOfNode(BST);
    cout << j;

    printf("\nHeight of Tree\t\t: ");
    int k = heightTree_1303213026(BST);
    cout<<k<<endl;

    printf("Number nternal of Tree\t: ");
    int l = countInternalNode(BST);
    cout<<l - 1<<endl;

    printf("Depth of Node 9\t\t: ");
    int h = deptNode(BST,9);
    cout<<h<<endl;

    printf("Depth of Node 4\t\t: ");
    h = deptNode(BST,4);
    cout<<h<<endl;

    printf("Level Node 8\t\t: ");
    h = levelNode(BST,8);
    cout<<h<<endl;

    printf("Child of Node 5\t\t: ");
    adrNode D = findNode_1303213026(BST,5);
    j = numberOfNode(D);
    cout << j - 1;
    return 0;
}










