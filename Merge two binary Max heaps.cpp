link-->https://www.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1?page=1&category=Heap&sortBy=submissions
Q.Merge two binary Max heaps
code-->    void heapify(vector<int>&arr , int n , int i){
        int largest =i;
        int left = 2*i+1;
        int right=2*i+2;
        if(left<n && arr[left]> arr[largest]){
            largest=left;
        }
        if(right<n && arr[right]>arr[largest]){
            largest=right;
        }
        if(largest!=i){
            swap(arr[i] , arr[largest]);
            heapify(arr , n , largest);
        }
    }
    void buildHeap(vector<int>&arr, int n){
        for(int i=n/2-1 ;i>=0;i--){
            heapify(arr , n , i);
        }
    } 
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int>ans;
        for(auto i:a){
            ans.push_back(i);
        }
        for(auto i:b){
            ans.push_back(i);
        }
        int size= ans.size();
        buildHeap(ans , size);
        return ans;
    }
Expected Time Complexity: O(n.Logn)
Expected Auxiliary Space: O(n + m)
