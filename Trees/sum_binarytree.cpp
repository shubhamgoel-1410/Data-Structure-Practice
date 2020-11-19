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

int sumbt(node *node)
{
    if(node==NULL)
        return 0;
    else
    {
        return node->data+sumbt(node->left)+sumbt(node->right); 
    }
}

int main()
{
    struct node *root = newnode(5);
    root->left = newnode(7);
    root->right = newnode(6);
    root->left->left = newnode(8);
    int sum;
	sum = sumbt(root);
    cout<<sum;
    return 0;
}

