void counterDiagonal(int mat[N][N], int n) {
                     
  for(int j=0; j<n; j++)
  {
    int i=0,k=0, l=j; 
    while(l>=i)
      cout<<mat[k++][l--]<<" ";
  }
  	
  for(int I = 1; I<n; I++)
  {
    int K=I, J=n-1;
    while(J>=I)
      cout<<mat[K++][J--]<<" ";
  }
  
}
