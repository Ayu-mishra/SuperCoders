
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{ 
  int t; cin>>t;
  while(t--)
  {
    int r1, c1; cin>>r1>>c1;
    int m1[r1][c1];
    for(int i=0; i<r1; i++)
      for(int j=0; j<c1; j++)
      	cin>>m1[i][j];
    int r2, c2; cin>>r2>>c2;
    int m2[r2][c2];
    for(int i=0; i<r2; i++)
      for(int j=0; j<c2; j++)
      	cin>>m2[i][j];
    
    for(int i=0; i<r1; i++)
    { 
      for(int k=0; k<c2; k++)
      {
        int sum=0; 
      	for(int j=0; j<c1; j++)
        	sum+= m1[i][j] * m2[j][k]; 
        cout<<sum<<" ";
      }
      cout<<"\n";  
    } 
  }
    return 0;
}
