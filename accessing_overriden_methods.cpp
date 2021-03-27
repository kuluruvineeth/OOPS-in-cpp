#include <bits/stdc++.h>
using namespace std;

class human
{
public:
  void introduce()
  {
    cout << "hi i am human" << endl;
  }
};

class student : public human
{
public:
  void introduce()
  {
    cout << "i am student" << endl;
    human ::introduce();
  }
};

int main()
{
  student vineeth;
  vineeth.introduce();
  return 0;
}