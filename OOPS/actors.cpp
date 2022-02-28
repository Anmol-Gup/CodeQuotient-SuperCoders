class Person
{
  protected:
  	string name,color;
  	int number_of_eyes;
  	int debut_year;
  public:
     Person(string name,string color, int number_of_eyes, int debut_year)
     {
       this->name=name;
       this->color=color;
       this->number_of_eyes=number_of_eyes;
       this->debut_year=debut_year;
     }
};
class Actor : public Person
{
	public:
	Actor(string name,string color,int number_of_eyes,int debut_year):Person(name,color,number_of_eyes,debut_year)
    {}
    string toString()
    {
    return "The person "+name+" is an Actor. He is "+color+" in color, has "+to_string(number_of_eyes)
    +" eyes and debut in "+to_string(debut_year)+"\n";
    }
};
class Actress : public Person
{
	public:
	Actress(string name,string color,int number_of_eyes,int debut_year):Person(name,color,number_of_eyes,debut_year)
    {}
    string toString()
    {
      return "The person "+name+" is an Actress. She is "+color+" in color, has "+to_string(number_of_eyes)
      +" eyes and debut in "+to_string(debut_year)+"\n";
    }
};
