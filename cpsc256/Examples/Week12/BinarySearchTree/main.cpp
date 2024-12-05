/* C++ program to demonstrate basic operations of a binary search tree */

/* The binary search tree is a binary tree where the value of a left child
 is less than or equal to the parent node and the value of the right child is
 greater than or equal to the parent node.

 Each node in the tree has a left
 and right child, and the tree is structured such that the left child is less
 than the parent, and the right child is greater than the parent.  This structure
 is maintained throughout the tree.

 The tree is built by inserting nodes into
 the tree, and the tree is traversed by moving left or right at each node, depending
 on the value of the node being searched for.

 The tree can be searched for a value,
 and the tree can be traversed in order, which will give the values in the tree in
 sorted order.

 The tree can also be traversed in reverse order, which will give the
 values in the tree in reverse sorted order.

 The tree can be deleted by deleting
 the nodes in the tree, and the tree can be copied by copying the nodes in the tree.*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;
 
class BST
{
    int data;
    BST* left;
    BST* right;
 
public:
    // Default constructor.
    BST();
 
    // Parameterized constructor.
    BST(int);
 
    // Insert function.
    BST* Insert(BST*, int);
 
    // Inorder traversal.
    string Inorder(BST*);
    
    int maxDepth(BST*);
    
    int GetData() {return data;}

};
 
// Default Constructor definition
//
// If a new node is created without passing any value, then this constructor
// is called. It will initialize the data to zero and the pointers to NULL.

BST ::BST(){
    data = 0;
    left = right = NULL;
}
 
// Parameterized Constructor definition
//
// If a new node is created by passing a value to it, then this constructor
// is called. It will initialize the data to the value passed, and the
// pointers to NULL.

BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}

 
// Insert function definition.
// This function will insert a node in the binary search tree.
//
// The value to be inserted is passed to the function.
// The address of the root node is also passed to the function.
//
// The function will return the address of the root node after the value is inserted.
//
// The reason that we return the address of the root node is that the root node
// can change if the value to be inserted is less than the root node.

BST* BST::Insert(BST* root, int value)
{
    if (!root)
    {
        // Insert the first node, if root is NULL.
        return new BST(value);
    }
 
    // Insert data.
    if (value > root->data)
    {
        // Insert right node data, if the 'value'
        // to be inserted is greater than 'root' node data.
 
        // Process right nodes.
        // Note the use of recursion here!!!!!!!
        // We should do a little aside on recursion here.
        root->right = Insert(root->right, value);
    }
    else
    {
        // Insert left node data, if the 'value'
        // to be inserted is greater than 'root' node data.
 
        // Process left nodes.
        root->left = Insert(root->left, value);
    }
 
    // Return 'root' node, after insertion.
    return root;
}
 
// Inorder traversal function.
// This gives data in sorted order
// Again, note the use of recursion here!!!!!!!
string BST ::Inorder(BST* root)
{
    string s = "";
    if (!root) {
        return s;
    }
    s = s + Inorder(root->left);
    s = s + to_string(root->data) + " ";
    s = s + Inorder(root->right);
    
    return s;
}

// Compute the "maxDepth" of a tree -- the number of nodes along the longest path
// from the root node down to the farthest leaf node
// Again, note the use of recursion here!!!!!!!
int BST ::maxDepth(BST* root)
{
    if (root == NULL)
        return 0;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(root->left);
        int rDepth = maxDepth(root->right);
     
        /* use the larger one */
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    } 
}

// Driver code
int main()
{
    
    vector<int> elements;
    elements.push_back(44);
    elements.push_back(34);
    elements.push_back(18);
    elements.push_back(51);
    elements.push_back(17);
    elements.push_back(20);
    elements.push_back(12);
    elements.push_back(40);
    
    
    BST b;
    BST* root = NULL;

    root = b.Insert(root, elements[0]);
    cout << "After adding " << elements[0] << ", the tree has " << b.Inorder(root) << endl;
    cout << "The height of the tree is " << b.maxDepth(root) << endl;
    
    for (unsigned int i = 1; i<elements.size(); i++) {
        b.Insert(root,elements[i]);
        cout << "After adding " << elements[i] << ", the tree has " << b.Inorder(root) << endl;
        cout << "The height of the tree is " << b.maxDepth(root) << endl;
    }
    
    //b.Inorder(root);
    return 0;
}
