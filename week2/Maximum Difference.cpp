int maxDifference(int arr[], int n){
  // complete this function
  int max = 0, min=arr[0];
  for(int i=1; i<n; i++)
  {
    if(arr[i]-min >max) max = arr[i] - min;
    if(arr[i]<min) min = arr[i];
    
  }
  if(max<=0) max = -1;
  return max;
  
}
