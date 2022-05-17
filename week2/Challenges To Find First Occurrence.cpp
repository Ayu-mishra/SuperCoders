int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // if we reach here, then element was
    // not present
    return -1;
}

long solveChallenges(int N, int arr[], int K, int challenges[]) {
  // Write your code here
  long sum=0;
  for(int i=0; i<K; i++)
  {
    int result = binarySearch(arr, 0, N-1, challenges[i]);
    if(result == -1)
      sum+=result;
    else
    {
      while(arr[result] == challenges[i])
      	result--;
      sum+= result+1;
    }
    
  }
  return sum;
  
}
