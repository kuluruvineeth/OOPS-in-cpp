#include <bits/stdc++.h>
using namespace std;

class human
{
public:
  string name;

  void introduce()
  {
    cout << "hi " << name << endl;
  }
};

int main()
{
  human vineeth;

  vineeth.name = "kuluruvineeth";
  vineeth.introduce();

  human *karthick = new human();

  karthick->name = "karthick";
  karthick->introduce();

  return 0;
}
