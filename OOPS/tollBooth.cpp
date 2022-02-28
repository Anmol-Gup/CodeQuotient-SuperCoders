#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;
class TollBooth
{
  int no_of_cars;
  int money;
  public:
   TollBooth()
   {
     no_of_cars=0;
     money=0;
   }
  void payingCar()
  {
    no_of_cars++;
	money=money+50;
  }
  void nopayCar()
  {
    no_of_cars++;
  }
  void display()
  {
    cout<<"Total Cash : "<<money<<"/-"<<endl<<"Total Cars : "<<no_of_cars;
  }
};
int main()
{
    // Write your code here
	TollBooth t;
  	char ch;
    while(true)
    {
      cin>>ch;
      if(ch=='p')
        t.payingCar();
  	  else if(ch=='q')
      {
        t.display();
        break;
      }
      else
        t.nopayCar();
    }
    // Return 0 to indicate normal termination
    return 0;
}
