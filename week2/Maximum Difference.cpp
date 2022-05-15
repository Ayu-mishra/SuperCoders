#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int maxDifference(int arr[], int n){
 
  int maxDiff=arr[1]-arr[0];
  int minElem=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]-minElem>maxDiff){
      maxDiff=arr[i]-minElem; 
    }
   if(arr[i]<minElem)
     minElem=arr[i];
  }
  if(maxDiff <=0) maxDiff = -1;
  return maxDiff;
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  int i;
  for(i=0;i<n;i++)
    cin>>arr[i];
  int res = maxDifference(arr,n);
  cout<<res;
  return 0;
}
