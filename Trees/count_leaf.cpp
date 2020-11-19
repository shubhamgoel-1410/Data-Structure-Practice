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

int countleafrec(struct node* root)
{
    if(root == NULL)
        return 0;
    if(root->left ==NULL && root->right == NULL)
        return 1;
    return countleafrec(root->left) + countleafrec(root->right);     
}

int countleaf(struct node* root)
{
    if(root == NULL)
        return 0;
    if(root->left ==NULL && root->right == NULL)
        return 1;
    queue<struct node *> q;
    int count = 0;
    q.push(root);
    while(!q.empty())
    {
        struct node* temp = q.front();
        q.pop();
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
        if(temp->left == NULL && temp->right == NULL)
            count++;
    }
    return count;
}

int main()
{
    struct node *root = newnode(5);
    root->left = newnode(7);
    root->right = newnode(6);
    root->left->left = newnode(8);
    root->left->right = newnode(8);
    root->right->right = newnode(9);
    countleaf(root);
    int count;
    count = countleaf(root);
    cout<<count;
}

