#include <bits/stdc++.h>
using namespace std;

class person
{
public:
  virtual void introduce() = 0; //pure virtual function
};

void person ::introduce()
{
  cout << "hey from person" << endl;
}

class student : public person
{
public:
  void introduce()
  {
    cout << "hi i am a student" << endl;
    person ::introduce();
  }
};

int main()
{
  // we cannot create object from abstract class(person)
  student vineeth;
  vineeth.introduce();
  return 0;
}