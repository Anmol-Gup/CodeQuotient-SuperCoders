struct Meeting
{
  int start;
  int finish;
};
bool comparator(struct Meeting a,struct Meeting b)
{
  return a.finish<b.finish; 
}
void meetingsPossible(vector<int> start, vector<int> finish) {
  // Write your code here
  int n=start.size();
  struct Meeting meet[n];
  for(int i=0;i<n;i++)
  {
    meet[i].start=start[i];
    meet[i].finish=finish[i];
  }
  sort(meet,meet+n,comparator);
  cout<<meet[0].start<<" "<<meet[0].finish;
}
