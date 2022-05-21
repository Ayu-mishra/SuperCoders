int romanToNum(char c)
{
  switch(c)
  {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
  }
}
int position(char c)
{
  char arr[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
  for(int i=0; i<7; i++)
    if(arr[i] == c) return i;
  return -1;
}

int romanToInt(string str) {
  int sum=0, current = -1 ;
  
  for(int i=0; i<str.length(); i++)
  {
    int pos = position(str[i]);
    if(pos >= current)
    {
      current = pos; 					
      sum+= romanToNum(str[i]);  
    }
    else
      sum+= romanToNum(str[i]) - 2*romanToNum(str[i-1]);
  }
  return sum;
}
