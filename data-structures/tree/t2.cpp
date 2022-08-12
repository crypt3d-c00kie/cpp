#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct node                  //binary tree
{
    int nData;
    struct node* left;
    struct node* right;
}NODE;

/*
Depth First Traversals:
(a) Inorder (Left, Root, Right) : 4 2 5 1 3
(b) Preorder (Root, Left, Right) : 1 2 4 5 3
(c) Postorder (Left, Right, Root) : 4 5 2 3 1

*/

void insertNode(NODE** r, int n)
{
    NODE* ptr1 = NULL;

    if(*r == NULL)          //first time inserting a node
    {
        ptr1 = (NODE*)malloc(sizeof(NODE));

        ptr1->nData = n;
        ptr1->left = NULL;
        ptr1->right = NULL;

        *r = ptr1;

        return;
    }

    ptr1 = *r;              //rest of the times

    if (n >= ptr1->nData)
    {
        return(insertNode(&(ptr1->right),n));
    }
    else if (n < ptr1->nData)
    {
        return(insertNode(&(ptr1->left),n));
    }

}

void inorderTraverse(NODE* r) // ascending or inorder
{
    if (r == NULL)
    {
        return;
    }

    inorderTraverse(r->left);
    cout << r->nData << endl;
    inorderTraverse(r->right);
    return ;
}
void preorderTraverse(NODE* r) 
{
    if (r == NULL)
    {
        return;
    }
    cout << r->nData << endl;
    preorderTraverse(r->left);
    preorderTraverse(r->right);
    
    return ;
}
void postorderTraverse(NODE* r) // descending or postorder
{
    if (r == NULL)
    {
        return;
    }
    
    postorderTraverse(r->left);
    postorderTraverse(r->right);
    cout << r->nData << endl;
    return ;
}
int main()
{
    NODE* root = NULL;


    insertNode(&root,12);
    insertNode(&root,7);
    insertNode(&root,3);
    insertNode(&root,14);
    insertNode(&root,1000);

        
    cout << endl;
    postorderTraverse(root);
    cout << endl;
    preorderTraverse(root);

    return 0;
}