#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

#define FAILURE { cout << "Ptr memory allocation failed \n"; exit(1); } // memory allocation failed popup
using namespace std;

typedef struct node
{
    int nData;
    int nHeight;
    int nBalanceFactor;
    struct node* leftSubtree;
    struct node* rightSubtree;

}NODE;

int getHeightofTree(NODE* root)
{
    if(root == NULL)
        return 0;

    return max(getHeightofTree(root->leftSubtree),getHeightofTree(root->rightSubtree))+1;

}
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
    ptr->nHeight = 1;
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
    
    root->nHeight = getHeightofTree(root);
   //cout << root->nData << " | ";
    //cout << "Height : " << root->nHeight << endl; 
    inOrderTraverse(root->rightSubtree);
    
}
void populateBalances(NODE* root)
{
    if(root == NULL)
    {
        return;
    }

    populateBalances(root->leftSubtree);
    int lh,rh;
    lh = (root->leftSubtree)?(root->leftSubtree->nHeight):0;
    rh = (root->rightSubtree)?(root->rightSubtree->nHeight):0;
    root->nBalanceFactor = lh-rh;

    populateBalances(root->rightSubtree);

}
void inOrderTraverse2(NODE* root)
{
    if (root == NULL)
    {
        return;
    }
    bool flag = false;

    inOrderTraverse2(root->leftSubtree);
    populateBalances(root);

    if((root->nBalanceFactor == 0) || (root->nBalanceFactor == 1) || (root->nBalanceFactor == -1))
    {
        flag = true;
    }
    cout << "Node val : " 
         << root->nData 
         << " | Height : " 
         << root->nHeight 
         << " | Balance factor : " 
         << root->nBalanceFactor 
         << "  | AVL? : " 
         << flag 
         << endl;
    inOrderTraverse2(root->rightSubtree);


}
int main()
{   
    NODE* root = NULL;
    vector<int> v;
    v.push_back(41);
    v.push_back(20);
    v.push_back(65);
    v.push_back(11);
    v.push_back(29);
    v.push_back(50);
    v.push_back(26);
   // v.push_back(23);

    for(int  i=0;i<v.size();i++)
    {
        root = insert(root,v[i]);
    }
    
    cout << "Height = " << getHeightofTree(root) << endl;
    /*root = insert(root,41);
    root = insert(root,20);
    root = insert(root,65);
    root = insert(root,11);
    root = insert(root,29);
    root = insert(root,50);
    root = insert(root,26);*/


    inOrderTraverse(root);
    cout << "inordertraverse2" << endl;
    inOrderTraverse2(root);

    return 0;
}