#include <bits/stdc++.h>
using namespace std;

class person
{
public:
  virtual void introduce()
  {
    cout << "hi from person" << endl;
  }
};

class student : public person
{
public:
  void introduce()
  {
    cout << "hi from student" << endl;
  }
};

class gstudent : public student
{
public:
  void introduce()
  {
    cout << "hi from graduating student" << endl;
  }
};

void whoisthis(person &p)
{
  p.introduce();
}

int main()
{
  person p;
  student s;
  gstudent g;

  whoisthis(p);
  whoisthis(s);
  whoisthis(g);
  return 0;
}