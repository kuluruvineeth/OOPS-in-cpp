#include <bits/stdc++.h>
using namespace std;

class human
{
private:
  int age;
  int getage()
  {
    return age - 5;
  }

public:
  void displayage()
  {
    cout << getage() << endl;
  }
  void setage(int value)
  {
    age = value;
  }
};

int main()
{
  human vineeth;
  vineeth.setage(21);
  vineeth.displayage();
  return 0;
}
