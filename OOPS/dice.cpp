class Dice 
{
  public:
  Dice(int count);
  virtual int getCount() const;
  virtual int getValue(int index) const;
  virtual void roll(int index);
  void setValue(int index, int value);   // not to be called by students
  virtual int total() const;
  virtual string toString() const;
  string toStringOriginal() const;       // not to be called by students

  private:
  int* diceValues;
  int count;

  friend ostream& operator <<(ostream& out, const Dice& dice);
};
