#include <bits/stdc++.h>
using namespace std;

class human
{
protected:
  string name;

public:
  void setname(string iname)
  {
    name = iname;
  }
};

class student : protected human
{
public:
  void display()
  {
    cout << name << endl;
  }

  void setstudentname(string iname)
  {
    setname(iname);
  }
};

int main()
{
  student vineeth;
  vineeth.setstudentname("kuluru");
  vineeth.display();
  return 0;
}