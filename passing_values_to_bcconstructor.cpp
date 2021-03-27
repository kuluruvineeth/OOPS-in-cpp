#include <bits/stdc++.h>
using namespace std;

class father
{
protected:
  int height;

public:
  father(int h)
  {
    cout << "constructor of father is called" << endl;
    height = h;
  }
};

class mother
{
protected:
  string skincolor;

public:
  mother(string icolor)
  {
    cout << "constructor of the mother is called" << endl;
    skincolor = icolor;
  }
};

class child : public father, public mother
{
public:
  child(int x, string c) : father(x), mother(c)
  {
    cout << "child constructor is called" << endl;
  }

  void display()
  {
    cout << "height is " << height << endl;
    cout << "skincolor is " << skincolor << endl;
  }
};

int main()
{
  child vineeth(5, "white");
  vineeth.display();
  return 0;
}