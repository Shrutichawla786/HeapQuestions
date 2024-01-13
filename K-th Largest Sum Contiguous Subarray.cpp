Link-->https://www.geeksforgeeks.org/problems/k-th-largest-sum-contiguous-subarray/1
Q.K-th Largest Sum Contiguous Subarray
code-->
int kthLargest(vector<int> &arr,int N,int K){
        priority_queue<int , vector<int> , greater<int> > mini;
        for (int i=0;i<N;i++){
            int sum =0;
            for(int j=i;j<N;j++){
                sum = sum+arr[j];
                if(mini.size()<K){
                    mini.push(sum);
                }
                else if (sum>mini.top()){
                    mini.pop();
                    mini.push(sum);
                }
            }
        }
        return mini.top();
    }
Expected Time Complexity: O(N2 * log K)
Expected Auxiliary Space: O(K)
