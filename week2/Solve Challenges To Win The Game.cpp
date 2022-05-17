long solveChallenges(int N, int arr[], int K, int challenges[]) {
  long sum=0;
  int temp[2002];
  for(int i=0; i<N; i++)
    temp[arr[i]+1001]++;
  
  for(int i=0; i<K; i++)
    sum+=temp[challenges[i]+1001];
  
  return sum;
}
