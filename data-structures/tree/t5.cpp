#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

typedef struct node
{
    int nData;
    struct node* leftSubtree;
    struct node* rightSubtree;
}NODE;

int heightOftree(NODE* r)
{
    if(r == NULL)
    {
        return 0;
    }
    return 1+(max(heightOftree(r->leftSubtree),(heightOftree(r->rightSubtree))));

}

int balanceOftree(NODE* r)
{
    if(r == NULL)
    {
        return 0;
    }

    return (heightOftree(r->leftSubtree)-heightOftree(r->rightSubtree));
}
NODE* getNode(int nData)
{
    NODE* ptr = NULL;
    ptr = (NODE*)malloc(sizeof(node));

    ptr->leftSubtree = NULL;
    ptr->rightSubtree = NULL;
    ptr->nData = nData;

    return ptr;

}
NODE* rotateLeft(NODE* x)
{
    NODE* y = NULL;
    NODE* z = NULL;

    y = x->rightSubtree;
    z = y->leftSubtree;
    y->leftSubtree = x;
    x->rightSubtree = z;

    return y;
}
NODE* rotateRight(NODE* x)
{
    NODE* y = NULL;
    NODE* z = NULL;

    return y;

}
int treeSearch(NODE* r,int nVal)
{   
    cout << "Calling tree search for key " << nVal << endl;
    if(r == NULL)
    {
        return 0;
    }

    if(nVal == r->nData)
    {
        return 1;
    }
    else if(nVal < r->nData)
    {
        return treeSearch(r->leftSubtree,nVal);
    }
    else if(nVal > r->nData)
    {
        return treeSearch(r->rightSubtree, nVal);

    }
}
NODE* insertNode(NODE* r,int nData)
{
   if(r == NULL)
   {
       NODE* ptr = NULL;
       ptr = getNode(nData);

       return ptr;
   }
    if(nData >= r->nData)
    {
        r->rightSubtree = insertNode(r->rightSubtree,nData);
    }
    else
    {
        r->leftSubtree = insertNode(r->leftSubtree,nData);
    }
    int nBal;

     nBal = balanceOftree(r);
     if(nBal <= -2)
     {
        ;// rightside of the tree is heavy and you have to do the left-shift
     }

    //out << "Data : " << nData << " Balance : " << balanceOftree(r) << endl;
    return r;
}

void inOrder(NODE* r)
{
    if(r == NULL)
    {
        return;
    }

    inOrder(r->leftSubtree);
    cout << r->nData << " | Height : " << heightOftree(r) << " | Balance factor : " << balanceOftree(r) << endl;
    inOrder(r->rightSubtree);

}

int main()
{
    NODE* root = NULL;
    

    root = insertNode(root,20);
    root = insertNode(root,21);
    root = insertNode(root,22);
    //root = insertNode(root,20);

    inOrder(root);
    treeSearch(root,22);
    cout << "--------------" << endl;

    root = rotateLeft(root);
    treeSearch(root,22);
    cout << endl;
    inOrder(root);
    
    return 0;
}