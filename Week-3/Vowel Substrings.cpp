bool isVowel(char c)
{
  switch(c)
  {
    case 'a': 
    case 'e': 
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': return true; break;
  }
  return false;
}
int countVowelSubstr(string str) {
  int count = 0, len = str.length();
  for(int i=0; i<len; i++)
    if(isVowel(str[i]))
      count = (count + len-i)%10007; 
  return count;
}
