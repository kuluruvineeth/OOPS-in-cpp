#include <bits/stdc++.h>
using namespace std;

class human
{
private:
  string name;
  int age;

public:
  human()
  {
    name = "noname";
    age = 0;
    cout << "constructor is called" << endl;
  }

  void display()
  {
    cout << name << endl;
    cout << age << endl;
  }
};

int main()
{
  human vineeth;
  vineeth.display();
  return 0;
}