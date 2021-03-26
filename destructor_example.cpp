#include <bits/stdc++.h>
using namespace std;

class human
{
private:
  string *name;
  int *age;

public:
  human(string iname, int iage)
  {
    name = new string; //dynamically alloting memory
    age = new int;

    *name = iname;
    *age = iage;
  }

  void display()
  {
    cout << "hi i am " << *name << " and i am " << *age << " years old" << endl;
  }

  ~human()
  {
    delete name;
    delete age;
    cout << "All resources are freed" << endl;
  }
};

int main()
{
  human *vineeth = new human("kuluru", 20);
  vineeth->display();
  delete vineeth;
  return 0;
}