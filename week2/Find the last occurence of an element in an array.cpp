int lastIndexofK(int arr[], int n, int k) {
  // Write Your Code Here
  for(int i=0; i<n-1; i++)
    if(arr[i]==k && arr[i+1]!= k) return i;
  if(arr[n-1] == k) return n-1;
    return -1;
}
