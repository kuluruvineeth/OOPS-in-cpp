#include <bits/stdc++.h>
using namespace std;

class human
{
public:
  human()
  {
    cout << "constructor is called" << endl;
  }

  // no parameters can be passed to destructors
  ~human()
  {
    cout << "destructor is called" << endl;
  }
};

int main()
{
  human *vineeth;
  vineeth = new human(); // constructor will be called
  delete vineeth;        // destructor will be called
}