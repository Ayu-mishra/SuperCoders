void removeDuplicates(int *arr, int *size)
{ 
  if(*size == 0 || *size ==1)
  {
  }
  else if(*size ==2)
  {
    if(arr[0] == arr[1])
      *size = 1;
  }
  else
  {
    int i=0,j=1;
    while(j< *size)
    {
      while(arr[j]==arr[j-1])
        j++;
      arr[++i] = arr[j++];
    }
    *size = i;
  }
}
