class TimeSpan
{
  // Write your code here
  int hours,minutes;
  public:
  TimeSpan(int hours,int minutes)
  {
    this->hours=hours;
    this->minutes=minutes;
  }
  int getHours()
  {
    return hours;
  }
  int getMinutes()
  {
    return minutes;
  }
  void add(int h,int min)
  {
    this->hours+=h;
    this->minutes+=min;
    if(this->minutes>60){
      this->hours+=1;
      this->minutes=minutes-60;
    }
  }
  void add(TimeSpan t)
  {
    add(t.hours,t.minutes);
  }
  double getTotalHours()
  {
    return (hours*60+minutes)/60.0;
  }
  string toString()
  {
    return to_string(this->hours)+" Hours, "+to_string(this->minutes)+" Minutes";
  }
};
