long long int multipleSum(int x){
  // Write your code here
  long long three = x/3;
  long long five = x/5; 
  long long threeSum = ((three) *( 6 + ((three - 1) * 3)))/2; //2* (18) = 36 
  long long fiveSum = ((five) * ( 10 + ((five -1) * 5)))/2;   // 10 + 10 = 20
  long long common = x/15; 
  long long comm = ((common) * (30 + ((common-1)*15)))/2;
  //cout<<threeSum<<" "<<fiveSum<<" "<<comm<<" ";
  return threeSum + fiveSum - comm;
}
