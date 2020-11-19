#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

struct node * newnode(int x)
{
    struct node *temp = new struct node();
    temp->data = x;
    temp->right = temp->left = NULL;
    return temp;
};

int maxDepth(node* node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);  
        int rDepth = maxDepth(node->right);  
      
        /* use the larger one */
        if (lDepth > rDepth)  
            return(lDepth + 1);  
        else return(rDepth + 1);  
    }  
}  

int main()
{
    struct node *root = newnode(5);
    root->left = newnode(7);
    root->right = newnode(6);
    root->left->left = newnode(8);
    root->left->right = newnode(8);
    root->right->right = newnode(9);
    int depth;
	depth = maxDepth(root);
    cout<<depth;
    return 0;
}

