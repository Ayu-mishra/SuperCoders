void makeAllZero(int mat[ROWS][COLS], int r, int c)
{
  vector<int> row;
  vector<int> col;
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c; j++)
    {
      if(mat[i][j] == 0)
      {
        row.push_back(i);
        col.push_back(j);
      }
    }
  }
  for(int i=0; i<row.size(); i++)
  {
    for(int rr=0; rr<c; rr++)
      mat[row[i]][rr] = 0;
    for(int cc=0; cc<r; cc++)
      mat[cc][col[i]] = 0;
  }
}
