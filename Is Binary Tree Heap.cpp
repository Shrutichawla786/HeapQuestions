link-->https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1
Q.Is Binary Tree Heap
code-->
    bool CBT(struct Node * root ,int  i ,int  nodeCount){
              if(root==NULL){
                  return true;
              }
              if(i>=nodeCount){
                  return false;
              }
              else{
                 bool  left=CBT(root->left , 2*i+1 , nodeCount);
                 bool right=CBT(root->right , 2*i+2 , nodeCount);
                 return (left&& right);
              }
    }
    bool MaxOrder(struct Node *root){
         //if node is leaf node
        if(root->left==NULL && root->right==NULL) return true;
        
        //only one child exist
        if(root->right==NULL){
            
            return (root->data > root->left->data);
        }else{
            
            //both child exists
            bool left = MaxOrder(root->left);
            bool right = MaxOrder(root->right);
            
            return ((root->data > root->left->data && root->data > root->right->data)
            && (left && right));
        }
    }
    int countNode(struct Node * root){
        if(root==NULL){
            return 0;
        }
        int ans=1+countNode(root->left)+countNode(root->right);
        return ans;
    }
    bool isHeap(struct Node* tree) {
        // code here
        int i=0;
        int totalCount = countNode(tree);
        if(CBT(tree , i , totalCount) && MaxOrder(tree)){
            return true;
        }
        else{
            return false;
        }
        
    }

  
Expected Time Complexity: O(N)
Expected Space Complexity: O(N)
