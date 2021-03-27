#include <bits/stdc++.h>
using namespace std;

//base class
class human
{
public:
  string name;
  int age;
  void setname(string iname) { name = iname; }
  void setage(int iage) { age = iage; }
};

// here we are inheriting all public variables and functions of above class
// sub class
class student : public human
{
public:
  int id;
  void setid(int iid) { id = iid; }

  void introduce()
  {
    cout << "hi i am " << name << " and i am " << age << " years old " << endl
         << "and my student id is " << id << endl;
  }
};

int main()
{
  student vineeth;
  vineeth.setname("kuluru");
  vineeth.setage(20);
  vineeth.setid(43);
  vineeth.introduce();
  return 0;
}