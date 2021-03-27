#include <bits/stdc++.h>
using namespace std;

class human
{
protected:
  string name;

public:
  void setname(string iname) { name = iname; }
};

class student : public human
{
public:
  void display()
  {
    cout << name << endl;
  }
};

int main()
{
  student vineeth;
  // vineeth.name = "kuluru"; throws an error
  vineeth.setname("kuluru");
  vineeth.display();
  return 0;
}