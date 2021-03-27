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

class student : private human
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

class gstudent : public student
{
public:
  void setgstudentname(string iname)
  {
    setstudentname(iname);
  }
};

int main()
{
  gstudent vineeth;
  vineeth.setgstudentname("kuluru");
  vineeth.display();
  return 0;
}