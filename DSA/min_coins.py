# Return the number of coins to be removed
def minCoins(coins,size,K):
  # Write your code here
  m=min(coins)
  c=0
  x=m+K
  for i in coins:
    if(i-m)>K:
      c+=(i-x)
  return c
