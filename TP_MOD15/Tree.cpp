#include "Tree.h"

adrNode newNode_1303213026(infotype x){
    adrNode P = new Node;
    info(P) = x;
    left(P) = NIL;
    right(P) = NIL;
    return P;
}
adrNode findNode_1303213026(adrNode root, infotype x){
    if(root == NIL || info(root) == x){
        return root;
    }else if(x < info(root)){
        findNode_1303213026(left(root),x);
    }else if(x > info(root)){
        findNode_1303213026(right(root),x);
    }
}

void insertNode_1303213026(adrNode &root, adrNode p){
    if(root == NIL){
        root = p;
    }else if(info(p) < info(root)){
        insertNode_1303213026(left(root),p);
    }else if(info(p) > info(root)){
        insertNode_1303213026(right(root),p);
    }
}

void printPreOrder_1303213026(adrNode root){
    if(root != NIL){
        cout << info(root) << " ";
        printPreOrder_1303213026(left(root));
        printPreOrder_1303213026(right(root));
    }
}

void printInOrder_1303213026(adrNode root){
    if(root != NIL){
        printInOrder_1303213026(left(root));
        cout << info(root) << " ";
        printInOrder_1303213026(right(root));
    }
}

void printPostOrder_1303213026(adrNode root){
    if(root != NIL){
        printPostOrder_1303213026(left(root));
        printPostOrder_1303213026(right(root));
        cout << info(root) << " ";
    }
}

void printDescendant_1303213026(adrNode root, infotype x){
    adrNode bro = findNode_1303213026(root,x);
    if(bro != NIL){
        printPreOrder_1303213026(left(bro));
        if(info(bro) != x){
            cout<<info(bro)<<" ";
        }
        printPreOrder_1303213026(right(bro));
    }
    cout<<endl;
}
int sumNode_1303213026(adrNode root){
    if(root != NIL){
        return info(root) + sumNode_1303213026(left(root)) + sumNode_1303213026(right(root));
    }else{
        return 0;
    }
}

int countLeaves_1303213026(adrNode root){
    if(root == NIL){
        return 0;
    }
    if(left(root) == NIL && right(root) == NIL){
        return 1;
    }else{
        return countLeaves_1303213026(left(root)) + countLeaves_1303213026(right(root));
    }
}

int heightTree_1303213026(adrNode root){
    if(root != NIL){
        int lDepth = heightTree_1303213026(left(root));
        int rDepth = heightTree_1303213026(right(root));
        if(lDepth > rDepth){
            return lDepth + 1;
        }else{
            return rDepth + 1;
        }
    }else{
        return -1;
    }
}

void MostLeft(adrNode root){
    if(left(root) == NIL){
        cout << info(root);
    }else{
        MostLeft(left(root));
    }
}
void MostRight(adrNode root){
    if(right(root) == NIL){
        cout << info(root);
    }else{
        MostRight(right(root));
    }
}

int numberOfNode(adrNode root){
    if(root == NIL){
        return 0;
    }
    int l = numberOfNode(left(root));
    int r = numberOfNode(right(root));
    return 1 + l + r;
}

void printAncestor(adrNode root, infotype x){
    if(root == NIL){
        cout << 0;
    }else if(x < info(root)){
        printAncestor(left(root),x);
        cout << info(root) << " ";
    }else if(x > info(root)){
        printAncestor(right(root),x);
        cout << info(root) << " ";
    }
}

int countInternalNode(adrNode root){
    if(root == NIL || (left(root) == NIL && right(root)== NIL)){
        return 0;
    }
        return 1 + countInternalNode(left(root)) + countInternalNode(right(root)) ;
}

int deptNode(adrNode root, infotype x){
    if(root == NIL || info(root) == x){
        return 0;
    }else if(x < info(root)){
        return 1 + deptNode(left(root),x);
    }else if(x > info(root)){
        return 1 + deptNode(right(root),x);
    }
}

int levelNode(adrNode root, infotype x){
    int k = deptNode(root,x);
    return k+1;
}
/*




void deleteNode(adrNode &root,infotype x){
    if(root != NIL){
        if(x<info(root)){
            deleteNode(left(root),x);
        }else if(x>info(root)){
            deleteNode(right(root),x);
        }else{ //x == info(root)
            if(left(root) == NIL && right(root) == NIL){
                root = NIL;
            }else if(left(root) != NIL){
                delMostRight(root,left(root));
            }else{
                delMostLeft(root,right(root));
            }
        }
    }
}

void delMostRight(adrNode &delNode,adrNode &node){
    if(right(node) != NIL){
        delMostRight(delNode,right(node));
    }else{  //right root = nil
        info(delNode) = info(node);
        deleteNode(node,info(node));
    }
}

void delMostLeft(adrNode &delNode,adrNode &node){
    if(left(node) != NIL){
        delMostLeft(delNode,left(node));
    }else{  //left root = nil
        info(delNode) = info(node);
        deleteNode(node,info(node));
    }
}*/


















