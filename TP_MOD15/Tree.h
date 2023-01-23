#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <stdio.h>
#include <iostream>
using namespace std;

#define info(P) (P)->info
#define left(P) (P)->Left
#define right(P) (P)->Right
#define NIL NULL
typedef int infotype;
typedef struct Node *adrNode;

struct Node {
    infotype info;
    adrNode Left,Right;
};
int levelNode(adrNode root,infotype x);
int deptNode(adrNode root, infotype x);
int countInternalNode(adrNode root);
void printAncestor(adrNode root, infotype x);
int numberOfNode(adrNode root);
void MostLeft(adrNode root);
void MostRight(adrNode root);
void printInOrder_1303213026(adrNode root);
void printPostOrder_1303213026(adrNode root);
adrNode newNode_1303213026(infotype x);
adrNode findNode_1303213026(adrNode root, infotype x);
void insertNode_1303213026(adrNode &root, adrNode p);
void printPreOrder_1303213026(adrNode root);
void printDescendant_1303213026(adrNode root, infotype x);
int sumNode_1303213026(adrNode root);
int countLeaves_1303213026(adrNode root);
int heightTree_1303213026(adrNode root);
void printLevelOrder(adrNode root);
void printCurrentLevel(adrNode root,int level);
void deleteNode(adrNode &root,infotype x);
void delMostRight(adrNode &delNode,adrNode &node);
void delMostLeft(adrNode &delNode,adrNode &node);
#endif // TREE_H_INCLUDED
