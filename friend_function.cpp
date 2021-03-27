#include <bits/stdc++.h>
using namespace std;

class human
{
  string name;
  int age;

public:
  human(string iname, int iage)
  {
    name = iname;
    age = iage;
  }

  void details()
  {
    cout << name << endl;
    cout << age << endl;
  }
  // friend function which is not part of this class but can access private variables of this class
  friend void display(human man);
};

void display(human man)
{
  cout << man.name << endl;
  cout << man.age << endl;
}

int main()
{
  human vineeth("kuluru", 20);
  display(vineeth); // can access above details
  return 0;
}