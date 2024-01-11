link-->https://www.geeksforgeeks.org/problems/does-array-represent-heap4345/1
Q.Does array represent Heap
code-->
  bool isMaxHeap(int a[], int n)
    {
        // Your code goes here

    for(int i=0;i<n/2;i++){
        int largest =i;
        int left = 2*i+1;
        int right= 2*i+2;
        if(left<n && a[largest]<a[left]){
            return false;
        }
        if(right<n && a[largest]<a[right]){
            return false;
        }
    }
    return true;

}     
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
