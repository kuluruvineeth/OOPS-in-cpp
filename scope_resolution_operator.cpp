#include <bits/stdc++.h>
using namespace std;

class human
{
public:
  string name = "noname";
  void introduce();
};

void human ::introduce()
{
  cout << human::name << endl;
}

int main()
{
  human vineeth;
  vineeth.name = "kuluruvineeth";
  vineeth.introduce();
  return 0;
}