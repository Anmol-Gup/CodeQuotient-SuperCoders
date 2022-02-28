class Date
{
  int m,d;
  public:
  	Date(int m,int d)
    {
      this->m=m;
      this->d=d;
    }
    int daysInMonth()
    {
      switch(m)
      {
        case 1: return 31; break;
        case 2: return 28; break;
        case 3: return 31; break;
        case 4: return 30; break;
        case 5: return 31; break;
        case 6: return 30; break;
        case 7: return 31; break;
      	case 8: return 31; break;
      	case 9: return 30; break;
      	case 10: return 31; break;
        case 11: return 30; break;
        case 12: return 31; break;
      }
    }
    int getDay()
    {
      return d;
    }
    int getMonth()
    {
      return m;
    }
   string toString(){
     return to_string(m)+"/"+to_string(d);
   }
  int absoluteDay(){
    if(m==1)
      return d;
    else if(m==2)
      return 31+d;
    else if(m==3)
      return 31+28+d;
    else if(m==4)
      return 31+28+31+d;
    else if(m==5)
      return 31+28+31+30+d;
    else if(m==6)
      return 31+28+31+30+31+d;
    else if(m==7)
      return 31+28+31+30+31+30+d;
    else if(m==8)
      return 31+28+31+30+31+30+31+d;
    else if(m==9)
      return 31+28+31+30+31+30+31+31+d;
    else if(m==10)
      return 31+28+31+30+31+30+31+31+30+d;
    else if(m==11)
      return 31+28+31+30+31+30+31+31+30+31+d;
    else
      return 31+28+31+30+31+30+31+31+30+31+30+d;
  }
    void nextDay(){
    d++;
    if(d>=daysInMonth()){
      m++;
      d=1;
      if(m>12)
        m=1;
    }
  }
};
