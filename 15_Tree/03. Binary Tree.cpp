#include <bits/stdc++.h>
using namespace std;

struct node   //This line is defining a structure called Node.
            // A structure(struct) is a way to group different variables together under a single name.
{

    //key: an integer variable that will hold the value or data of the node.

    int key;    //key: an integer variable that will hold the value or data of the node.
    node *left; //left: a pointer to another Node structure, representing the left child of the current node.
    node *right;



    
    //below line is constructor definition
    /*
    This is a constructor for the Node structure. A constructor is a special function that is called when an object of the structure is created. Here's what it does:
Node(int k): This line defines the constructor, which takes an integer parameter k.
key = k;: This assigns the value of k to the key member of the structure.
left = right = NULL;: This initializes the left and right pointers to NULL, meaning that when a new node is created, it doesn't have any children (yet).
    */
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

int main()
{
    node *root = new node(10);
    root->left= new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
}