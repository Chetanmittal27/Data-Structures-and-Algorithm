#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

public:
    Node(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

Node *insertIntoTree(Node *root, int val)
{

    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }

    if (val > root->data)
    {
        root->right = insertIntoTree(root->right, val);
    }

    else
    {
        root->left = insertIntoTree(root->left, val);
    }

    return root;
}

int max_value(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp->data;
}

Node* deleteNode(Node *root, int x)
{

    if (root == NULL)
    {
        return root;
    }

    if (root -> data == x)
    {
        // No child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child

        // left child only
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // right child only
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 childs
        if (root->left != NULL && root->right != NULL)
        {
            int maxi = max_value(root->left);
            root->data = maxi;
            root->left = deleteNode(root->left, maxi);

            return root;
        }
    }

    else if(x > root -> data){
        root -> right = deleteNode(root -> right , x);
    }

    else{
        root -> left = deleteNode(root -> left , x);
    }

    return root;
}

void takeInput(Node *&root)
{

    int val;
    cin >> val;

    while (val != -1)
    {
        root = insertIntoTree(root, val);
        cin >> val;
    }
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node *root = NULL;

    takeInput(root);

    preorder(root);
    cout << endl;

    root = deleteNode(root, 3);
    preorder(root);
    cout << endl;
    return 0;
}