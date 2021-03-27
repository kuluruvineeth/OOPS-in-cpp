#include <bits/stdc++.h>
using namespace std;

class human
{
public:
  human()
  {
    cout << "constructor of the human class called" << endl;
  }

  ~human()
  {
    cout << "destructor of the human class called" << endl;
  }
};

class student : public human
{
public:
  student()
  {
    cout << "constructor of the student class called" << endl;
  }

  ~student()
  {
    cout << "destructor of the student class called" << endl;
  }
};

int main()
{
  student vineeth;
  return 0;
}