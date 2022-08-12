#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>

using namespace std;
                                   // Tree is a recursive defintion.
typedef struct node{            //tree is set of one or more nodes where one node is called root, the other ones are called as set of leftsubtree or null and set of right subtree or null
  int nData;                     // tree = (root,(leftSubtree or NULL),(rightSubtree or NULL))
  struct node *left, *right;    
}NODE,node1,node2;              // root is the head node, leaf is the bottom node(which has no leaf)
                                  // parents of the leaves are ancestors
typedef struct node node3,node4;  // descendants are children nodes

int nMin, nMax;


void InsertNode(int nData, NODE **t){
  NODE *ptr = nullptr;

  if ( *t == NULL){
    ptr = (NODE*)malloc(sizeof(NODE));
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->nData = nData;
    *t = ptr ;
    return;
  }

  ptr = *t ;

  if ( nData >= ptr->nData){ // ndata = 7 (parameter) ;; ptr->nData (previously existing value 12)
    return InsertNode(nData, &(ptr->right));
  }
  else{
    return InsertNode(nData, &(ptr->left));
  }
 // return InsertNode(nData, &ptr);
}

void inorderTraversal(node* tree)
{
  if(tree == NULL)
  {
    return;
  }
  else
  {
    inorderTraversal(tree->left);
    if(tree->nData <= nMin)
    {
      nMin = tree->nData;
    }
    if(tree->nData > nMax)
    {
      nMax = tree->nData;
    }

    cout << tree->nData << endl;            // inorder traverse
    inorderTraversal(tree->right); 
  }
}
void postorderTraversal(node* tree)
{
  if(tree == NULL)
  {
    return;
  }
  else
  {
    postorderTraversal(tree->left);
    postorderTraversal(tree->right); 
    cout << tree->nData << endl; // postorder traverse
  }
}
void preorderTraversal(node* tree)
{
  if(tree == NULL)
  {
    return;
  }
  else
  {
    cout << tree->nData << endl; // pre-order traverse
    preorderTraversal(tree->left);
    preorderTraversal(tree->right); 
    
  }
}

void PreOrder(NODE *ptr){
  if ( ptr == nullptr) return;
  std::cout<<ptr->nData << std::endl;
  PreOrder(ptr->left);
  PreOrder(ptr->right);
}

void PreOrderNonRecursive(NODE *ptr){
  std::stack<NODE *> st;
  NODE *ptr1;
  st.push(ptr);

  while(!st.empty()){
    ptr1 = st.top();
    st.pop();
    std::cout << ptr1->nData << std::endl;
    if ( ptr1->right )
      st.push(ptr1->right); // put the right first so that it will be processed second
    if ( ptr1->left )
      st.push(ptr1->left); // put the left second so that it will be processed first
  }
}

int main()
{
	NODE *root = NULL;
//  node1 *ro = NULL;
  //node2 *rot = NULL;

  
	InsertNode(12, &root);
	InsertNode(7, &root);
	InsertNode(14, &root);
  InsertNode(3, &root);
	InsertNode(13, &root);
	InsertNode(15, &root);
	InsertNode(12, &root);
	InsertNode(14, &root);
	InsertNode(16, &root);
	//InsertNode(15, &root);
  nMin = nMax = root->nData;
  inorderTraversal(root);
  

  cout << "Minimum : " << nMin << endl;
  cout << "Maximum : " << nMax << endl;

  /*PreOrder(root);
  std::cout << "========================" << std::endl;
  char ch;
  std::cin>>ch;
  PreOrderNonRecursive(root);
  //PreOrder(root);
*/
  return 0;
}
