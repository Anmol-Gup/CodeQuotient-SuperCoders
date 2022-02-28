class FilteredAccount : public Account
{
	// Write your code here
    int c;
    public:
    FilteredAccount(int n):Account(n)
    {
    	c=0;
    }
    int filtered()
    {
      return c;
    }
    bool process(Transaction t)
    {
      if (t.value() == 0) {
        c++;
        return true;
      }  
      else{
        Account::process(t); 
        return false;
      }  
    }
};
