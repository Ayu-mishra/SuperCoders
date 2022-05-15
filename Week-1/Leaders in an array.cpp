vector<int> findTheLeaders(vector<int> arr) {
  int n= arr.size(), leader = arr.at(n-1);
  vector<int> l;
  l.push_back(leader);
  for(int i=n-1; i>=0; i--)
  {
    if(arr.at(i) > leader)
    {
      leader = arr.at(i);
      l.push_back(leader);
    }
  }
  reverse(l.begin(), l.end());
  return l;
}
