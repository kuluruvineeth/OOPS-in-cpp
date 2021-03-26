#include <bits/stdc++.h>
using namespace std;

class human
{
private:
  int age;
  string name;

public:
  human()
  {
    cout << "default constructor" << endl;
    name = "noname";
    age = 0;
  }

  human(string iname)
  {
    cout << "constructor with name as parameter" << endl;
    name = iname;
    age = 0;
  }

  human(int iage)
  {
    cout << "constructor with age as parameter" << endl;
    name = "noname";
    age = iage;
  }

  human(string iname, int iage)
  {
    cout << "constructor with both as parameters" << endl;
    name = iname;
    age = iage;
  }

  void display()
  {
    cout << name << endl;
    cout << age << endl;
  }
};

int main()
{
  human vineeth;
  vineeth.display();

  human kuluru("vineeth");
  kuluru.display();

  human sudhu(20);
  sudhu.display();

  human sreenath("sreenu", 22);
  sreenath.display();

  return 0;
}
