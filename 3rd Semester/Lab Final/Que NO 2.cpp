#include <iostream>
using namespace std;


struct Node
{
    char data;
    struct Node* left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void pre_tree(struct Node* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    pre_tree(node->left);
    pre_tree(node->right);
}


int main()
{
    char A = 'A';
    char B = 'B';
    char C = 'C';
    char D = 'D';
    char E = 'E';
    char F = 'F';
    char G = 'G';
    char H = 'H';
    char I = 'I';
    char J = 'J';
    char K = 'K';
    char L = 'L';
    struct Node *root = new Node (A);
    root->left = new Node(B);
    root->right = new Node(C);
    root->left->left = new Node(D);
    root->left->right = new Node(E);
    root->left->left->left = new Node(H);
    root->left->left->right = new Node(I);
    root->left->right->left = new Node(J);
    root->left->right->right = new Node(K);
    root->right->left = new Node(F);
    root->right->right = new Node(G);
    root->right->left->left = new Node(L);
    cout << "\nPreorder traversal of binary tree is \n";
   pre_tree(root);
    return 0;
}
