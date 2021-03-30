#include <bits/stdc++.h>
using namespace std;

void studentlist()
{
  class student
  {
  public:
    string name;
    int age;

    void display()
    {
      cout << name << endl
           << age << endl;
    }
  };

  student vineeth;
  vineeth.name = "kuluru";
  vineeth.age = 20;
  vineeth.display();
}

int main()
{
  studentlist();
  return 0;
}