link-->https://www.geeksforgeeks.org/problems/convert-min-heap-to-max-heap-1666385109/1
Q.Convert Min Heap to Max Heap
void heapyfy(vector<int>&arr , int n , int i ){
    int largest =i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }

    if(largest !=i){
        swap(arr[largest] , arr[i]);
        heapyfy(arr , n , largest);
    }

}
    void convertMinToMaxHeap(vector<int> &arr, int N){
        
        int n= arr.size();
        for(int i=n/2-1;i>=0;i--){
            heapyfy(arr ,n , i );
        
        }
    
    
    
    }

Expected Time Complexity: O(N * log N)
Expected Auxiliary Space: O(N)
