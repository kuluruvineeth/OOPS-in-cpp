#include <bits/stdc++.h>
using namespace std;

class father
{
public:
  int height;
  void askfather()
  {
    cout << "i am your father" << endl;
  }
};

class mother
{
public:
  string skincolor;
  void askmother()
  {
    cout << "i am your mother" << endl;
  }
};

class child : public father, public mother
{
public:
  void askparents()
  {
    cout << "i am asking parents" << endl;
  }

  void setcolorandheight(string icolor, int iheight)
  {
    skincolor = icolor;
    height = iheight;
  }

  void display()
  {
    cout << "color : " << skincolor << " height : " << height << endl;
  }
};

int main()
{
  child vineeth;
  vineeth.setcolorandheight("brown", 5);
  vineeth.display();
  vineeth.askfather();
  vineeth.askmother();
  return 0;
}