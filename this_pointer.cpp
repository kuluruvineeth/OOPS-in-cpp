#include <bits/stdc++.h>
using namespace std;

class human
{
public:
  int age;
  void setage(int age)
  {
    this->age = age;
  }

  void display()
  {
    cout << this->age << endl;
  }
};

int main()
{
  human vineeth;
  vineeth.setage(21);
  vineeth.display();
  return 0;
}