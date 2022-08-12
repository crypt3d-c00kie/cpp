#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct node
{
    int nData;
    struct node* leftSubtree;
    struct node* rightSubtree;

}NODE;

NODE* makeNode(int nVal)
{
    NODE* ptr = NULL;

    ptr = (NODE*)malloc(sizeof(node));
    ptr->nData = nVal;
    ptr->leftSubtree = NULL;
    ptr->rightSubtree = NULL;

    return ptr;
}
NODE* leastValue(NODE* r)
{
    if ( r == NULL)
    {
        return r;
    }
    //NODE* x = NULL;
    //x = r;
    while(r->leftSubtree != NULL)
    {
      //  x = r;
        r = r->leftSubtree;
    }
    return r;
}
NODE* deleteNode(NODE* r, int key)
{
    if(r == NULL)
    {
        //cout << "Tree is already empty " << endl;
        return r;
    }

    if (key < r->nData)
    {
        r->leftSubtree = deleteNode(r->leftSubtree,key);
    }
    else if(key > r->nData)
    {
        r->rightSubtree = deleteNode(r->rightSubtree,key);
    }
    else if(key == r->nData)
    {
        cout << "Found the node!" << endl;

        NODE* x = NULL;

        if(r->leftSubtree == NULL)
        {
            x = r->rightSubtree;
            delete(r);
            return x;
        }
        else if(r->rightSubtree == NULL)
        {
            x = r->leftSubtree;
            delete(r);
            return x;
        }
        else if (r->leftSubtree != NULL && r->rightSubtree != NULL)
        {
            NODE* temp = NULL;
            temp = leastValue(r->rightSubtree);
            r->nData = temp->nData;
            r->rightSubtree = deleteNode(r->rightSubtree,temp->nData);
            
            return r;
        }

    }

    return r;
}
NODE* insertNode(NODE* r, int nVal)
{
    if(r == NULL)
    {
        NODE* ptr = NULL;
        ptr = makeNode(nVal);
        return ptr;
    }

    if(nVal >= r->nData)
    {
        r->rightSubtree = insertNode(r->rightSubtree,nVal);
    }
    else if (nVal < r->nData)
    {
        r->leftSubtree = insertNode(r->leftSubtree,nVal);
    }

    return r;
}

void inOrderTraverse(NODE* r)
{
    if(r == NULL)
    {
       //cout << "Tree is NULL" << endl;
        return;

    }

    inOrderTraverse(r->leftSubtree);
    cout << r->nData << " ";
    inOrderTraverse(r->rightSubtree);
}
int main()
{
    NODE* root = NULL;
/*
    root = insertNode(root,41);
    root = insertNode(root,20);
    root = insertNode(root,65);
    root = insertNode(root,11);
    root = insertNode(root,29);
    root = insertNode(root,50);
    root = insertNode(root,26);
*/

    root = insertNode(root,20);
    root = insertNode(root,12);
    root = insertNode(root,10);
    root = insertNode(root,9);
    //root = insertNode(root,9);
    
    //root = deleteNode(root,10);
    
    cout << "before deletion" << endl;
    inOrderTraverse(root);
    cout << "after deletion " << endl;
    root = deleteNode(root,10);
    inOrderTraverse(root);
    
    return 0;
}