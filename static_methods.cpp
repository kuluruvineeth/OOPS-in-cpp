#include <bits/stdc++.h>
using namespace std;

class human
{
public:
  static int human_count;

  human()
  {
    human_count++;
  }

  // we can only access static variables in static methods
  static void humancount()
  {
    cout << "There are " << human_count << " peoples in program" << endl;
  }
};

int human::human_count = 0;

int main()
{
  human vineeth;
  human ::humancount();
  return 0;
}