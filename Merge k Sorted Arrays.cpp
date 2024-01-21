link->https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1
Q.Merge k Sorted Arrays
code-->
   vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> ans;
        
        for(auto &i: arr) {
            for(auto &j: i) {
                pq.push(j);
            }
        }
        
        for(int i=0; i<K; i++) {
            for(int j=0; j<K; j++) {
                ans.push_back(pq.top());
                pq.pop();
            }
        }
        
        return ans;
    }
Expected Time Complexity: O(K2*Log(K))
Expected Auxiliary Space: O(K)
