/*
        AVL TREE
1- It is a BST (for every node, left subtree is smaller and right greater)
2- It is balanced (for every node ,difference between left and right heights does not exceed one)
        balance factor =|lh-rh|
        balance factor <=1



INSERTION OPERATION
    - perform normal bst insert
    - traverse all ancestores of the newly inserted 
        node from the node to root.
    - if find an unbalanced node,check for any of the below cases
        1- left left
        2-right right

        // below are Double rotation
        3-left right
        4- right left  


      HEIGHT OF AVL TREE
        h< clog(n+2)+b 

        where c~ 1.4405
        b~ -1.3277      
*/

// overall time complexicity is theta(logn)