// #include <bits/stdc++.h>
// using namespace std;


// // int first=NULL,second=NULL;
// // void fix_BST(int arr[],int &n,int &prev)
// // {
// //     for(int i=0;i<n;i++)
// // {
// //     if(arr[i]<(prev=INT_MIN))
// //     {
// //         if(first==NULL)
// //             first=prev;
// //         second=arr[i];    
// //     }
// //     prev=arr[i];
// // }
// // }

// struct node
// {node *first = NULL, *second = NULL, *prev = NULL;};

// // struct node
// // {
// //     int key;
// //     node *left,*right;
    
// //     node (int x)
// //     {
// //         key=x;
// //         left=NULL;
// //         right=NULL;
        
// //     } 
// // };

// void FIX_bst(node *root)
// {
//     if(root==NULL) return;
//     FIX_bst(root->left);
//     if(prev!=NULL && root->key<(prev->key))
//     {
//         if(first==NULL)
//             first=prev;
//           second=root;  
//     }

//     prev=root;
//     FIX_bst(root->right);
// }