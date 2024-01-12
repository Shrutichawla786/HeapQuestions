Link-->https://www.geeksforgeeks.org/problems/bst-to-max-heap/1
Q.BST to max heap
code--> void inorder(Node* root , vector<int>&v){
        if(root==NULL){
            return;
        }
        inorder(root->left , v);
        v.push_back(root->data);
        inorder(root->right ,v);
    }
    void MaxHeap(Node * root , int &i , vector<int>&v){
        if(root==NULL){
            return;
        }
        root->data= v[i];
        i--;
        MaxHeap(root->right , i , v);
        MaxHeap(root->left  , i, v);
        
    }
    void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        vector<int>v;
        inorder(root , v);
        int i=v.size()-1;
        MaxHeap(root , i , v);
        
    }  
Expected Time Complexity : O(n)
Expected Auxiliary Space : O(n)
