#include <bits/stdc++.h>
using namespace std;

class human
{
private:
  int age;
  string name;

public:
  human()
  {
    cout << "default constructor" << endl;
    name = "noname";
    age = 0;
  }
  // incase we initialize defaultly all variables in overloaded constructor then it is not mandatory to have default constructor

  human(string iname, int iage = 20)
  {
    cout << "overloaded constructor" << endl;
    name = iname;
    age = iage;
  }

  void display()
  {
    cout << name << endl;
    cout << age << endl;
  }
};

int main()
{
  human vineeth("kuluru");
  vineeth.display();
  return 0;
}