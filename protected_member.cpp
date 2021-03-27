#include <bits/stdc++.h>
using namespace std;

class human
{
protected:
  string name;

public:
  void setname(string iname) { name = iname; }
};

// outside functions cannot access protected variables
// subclasses can access protected members

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
  vineeth.setname("kuluru");
  vineeth.display();
  return 0;
}