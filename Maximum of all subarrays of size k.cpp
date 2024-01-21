link-->https://www.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1
Q.Maximum of all subarrays of size k
code--> vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        priority_queue<int>heap;
        priority_queue<int>drop;
        vector<int>ans;
        int i=0;
        for(int i=0;i<k;i++){
            heap.push(arr[i]);
        }
        ans.push_back(heap.top());
        
        for(int i=k;i<n;i++){
            if(arr[i-k]==heap.top()){
                heap.pop();
            }
            else{
                drop.push(arr[i-k]);
            }
            while(!drop.empty() && drop.top()==heap.top()){
                heap.pop();
                drop.pop();
                
            }
            heap.push(arr[i]);
            ans.push_back(heap.top());
        }
        return ans;
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(k)
  
