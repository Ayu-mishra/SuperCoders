long power(int base, int exp) {
  // Write your code here
  if(exp <0)
    return -1;
  if(exp ==0)
    return 1;
  if(exp ==1)
    return base;
  return base*power(base, exp-1);
  
}
