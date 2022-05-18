string compressString(string str) {
  // Write your code here
  string temp;
  temp+= str[0];
  int count = 0;
  char current = str[0];
  for(int i=0; i<str.length(); i++)
  {
    if(current!= str[i])
    {
      if(count>1)
      temp+= to_string(count);
      current = str[i];
      count = 1;
      temp += current;
    }
    else count++;
  }
  if(count>1)
      temp+= to_string(count);
  return temp;
}
