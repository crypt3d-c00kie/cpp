#include <iostream>
#include <cstdlib>
#include <algorithm>
#define FAILURE { cout << "Failed to create and allocate memory" << endl; exit(1);}

using namespace std;

typedef struct node
{
    int nData;
    int nHeight;
    int nBalanceFactor;
    struct node* leftSubtree;
    struct node* rightSubtree;

}NODE;


NODE* makeNode(int nVal)
{
    NODE* rPtr = NULL;
    rPtr = (NODE*)malloc(sizeof(node));

    if(rPtr == NULL)
    {
        FAILURE;
    }
    
    rPtr->nData = nVal;
    rPtr->nHeight = 1;
    rPtr->nBalanceFactor = 0;
    rPtr->leftSubtree = NULL;
    rPtr->rightSubtree = NULL;
    return rPtr;
}
int getHeight(NODE* r)
{
    if (r == NULL)
    {
        return 0;
    }
    return r->nHeight;
}
int getBalance(NODE* r)
{
    int lh,rh;

    if(r == NULL)
    {
        return 0;
    }

    lh = getHeight(r->leftSubtree);
    rh = getHeight(r->rightSubtree);

    return lh-rh;
}
NODE* insertNode(NODE* r, int nVal)
{
    if(r == NULL)
    {
        return makeNode(nVal);
    }
    else if(nVal >= r->nData)
        r->rightSubtree = insertNode(r->rightSubtree,nVal);
    else
    {
        r->leftSubtree = insertNode(r->leftSubtree,nVal);
    }

    r->nHeight = 1 + max(getHeight(r->leftSubtree),getHeight(r->rightSubtree));
    r->nBalanceFactor = getBalance(r);

    return r;
}
void inOrderTraverse(NODE* r)
{
    if(r == NULL)
    {
        return;
    }
    inOrderTraverse(r->leftSubtree);
    cout << r->nData << " | height : " << r->nHeight << " | Balance Factor : " << r->nBalanceFactor << endl;
    inOrderTraverse(r->rightSubtree);

}
int main()
{
    NODE* root = NULL;

    root = insertNode(root,41);
    root = insertNode(root,20);
    root = insertNode(root,65);
    root = insertNode(root,11);
    root = insertNode(root,29);
    root = insertNode(root,50);
    root = insertNode(root,26);

    inOrderTraverse(root);

    return 0;
}