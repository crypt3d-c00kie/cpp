#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

#define FAILURE { cout << "Ptr memory allocation failed \n"; exit(1); } // memory allocation failed popup
using namespace std;

typedef struct node
{
    int nData;
    struct node* leftSubtree;
    struct node* rightSubtree;

}NODE;


NODE* getNode(int n)
{
    NODE* ptr = NULL;

    ptr = (NODE*)malloc(sizeof(struct node));
    
    if(ptr == NULL)
    {
        FAILURE;
    }
    ptr->leftSubtree = NULL;
    ptr->rightSubtree = NULL;
   
    ptr->nData = n;

    return ptr;
}

NODE* insert(NODE* root,int nData)
{
    if(root == NULL)
    {
        NODE* ptr = NULL;

        ptr = getNode(nData);
        return ptr;
    }
    
    if(nData < root->nData)
    {
        root->leftSubtree = insert(root->leftSubtree,nData); 
    }
    else if(nData >= root->nData)
    {
        root->rightSubtree = insert(root->rightSubtree,nData);
    }
    return root;
}

void inOrderTraverse(NODE* root)
{
    if(root == NULL)
    {
        return;
    }

    inOrderTraverse(root->leftSubtree);
    
    cout << root->nData << " " ;

    inOrderTraverse(root->rightSubtree);
    
}

int main()
{   
    NODE* root = NULL;
    vector<int> v;
    v.push_back(20);
    v.push_back(21);
    v.push_back(22);
 /*   v.push_back(11);
    v.push_back(29);
    v.push_back(50);
    v.push_back(26);
   // v.push_back(23);
*/
    for(int  i=0;i<v.size();i++)
    {
        root = insert(root,v[i]);
    }
    
    inOrderTraverse(root);

 
    return 0;
}