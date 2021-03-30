#include <bits/stdc++.h>
using namespace std;

class animal
{
public:
  animal()
  {
    cout << "animal constructor" << endl;
  }
  int age;
  void walk()
  {
    cout << "animal walks" << endl;
  }
};

class tiger : virtual public animal
{
public:
  tiger()
  {
    cout << "constructor of tiger" << endl;
  }
};

class lion : virtual public animal
{
public:
  lion()
  {
    cout << "constructor of lion" << endl;
  }
};

class liger : public tiger, public lion
{
public:
  liger()
  {
    cout << "constructor of liger" << endl;
  }
};

int main()
{
  liger vineeth;
  vineeth.walk();
  return 0;
}
