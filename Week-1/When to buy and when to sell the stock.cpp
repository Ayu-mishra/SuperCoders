int findMaxProfit(vector<int> prices) {
    // Write your code here
  int sizee = prices.size();
  int min = prices[0], maxProfit = 0;
  for(int i=1; i<sizee; i++)
  {
    if(prices[i]<min)
    {
      min = prices[i];                    
    }
    if(prices[i] - min > maxProfit)
    	maxProfit = prices[i] - min; 
  }
  return maxProfit;
  
}
