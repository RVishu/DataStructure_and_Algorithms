// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int key;
//     node *left;
//     node *right;
//     node *prev;

//     node(int k)
//     {
//         key=k;
//        left=right=NULL; 
//        prev=NULL;
       
//     }

// };




// node *prev=NULL;
// node *BT_DLL(node *root)
// {
//     if(root==NULL) return root;
//     node *head = BT_DLL(root->left);
//     if(prev==NULL) {head==root;}
//     else
//     {
//         root->left=prev;
//         prev->right=root;
//     }
//     prev=root;
//     BT_DLL(root->right);
//     return head;

// }   

// O(n) O(h)