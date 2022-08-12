#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct node
{
    int n;
    struct node* left;
    struct node* right;

}NODE;

void insertNode(NODE** r, int nData)
{   
     NODE* ptr = NULL;

    if(*r == NULL)
    {
        
        ptr = (NODE*)malloc(sizeof(struct node));

        ptr->left = NULL;
        ptr->right = NULL;
        ptr->n = nData;

        *r = ptr;
        return;
    }
    
    ptr = *r;

    if(nData >= ptr->n)
    {
        insertNode(&ptr->right,nData);
    }
    else if(nData < ptr->n)
    {
        insertNode(&ptr->left,nData);
    }
}

void inorderTraverse(NODE* r)
{
    if(r == NULL)
    {
        return;
    }

    inorderTraverse(r->left);
    cout << r->n << " ";
    inorderTraverse(r->right);

}
void postorderTraverse(NODE* r)
{
    if(r == NULL)
    {
        return;
    }

    postorderTraverse(r->left);
    postorderTraverse(r->right);
    cout << r->n << " ";

}
void preorderTraverse(NODE* r)
{
    if(r == NULL)
    {
        return;
    }
    cout << r->n << " ";
    preorderTraverse(r->left);
    preorderTraverse(r->right);

}
int main()
{
    NODE* root = NULL;
    int nData,nLimit;

    cout << "How many data elements? ";
    cin >> nLimit;

    cout << "Enter data : ";
    for(int i=0;i<nLimit;i++)
    {
        cin >> nData;
        insertNode(&root, nData);
   
    }
    cout << "inorder traversed form : ";
    inorderTraverse(root);

    
    return 0;
}