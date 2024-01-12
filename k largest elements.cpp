link-->https://www.geeksforgeeks.org/problems/k-largest-elements4206/1
Q.k largest elements
code-->vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int>ans;
	    priority_queue<int, vector<int>, greater<int>> pq;
	    for(int i=0;i<k;i++){
	        pq.push(arr[i]);
	    } 
	    for(int i=k;i<n;i++){
	        if(arr[i] > pq.top()){
	            pq.pop();
	            pq.push(arr[i]);
	        }
	    }
        
        while (!pq.empty()) 
        { 
            ans.push_back(pq.top() ); 
            pq.pop(); 
        } 
        
        reverse (ans.begin() , ans.end());
         return ans;
    }
Expected Time Complexity: O(K+(N-K)*logK)
Expected Auxiliary Space: O(K+(N-K)*logK)

