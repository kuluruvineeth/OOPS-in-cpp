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

  void humantotal()
  {
    cout << "There are " << human_count << " people in this program" << endl;
  }
};

// initialization of static variable should be ouside of class

int human::human_count = 0;

int main()
{
  cout << human::human_count << endl; // accessing static variable
  human vineeth;
  vineeth.humantotal();

  human kuluru;
  kuluru.humantotal();

  cout << human::human_count << endl;
  return 0;
}