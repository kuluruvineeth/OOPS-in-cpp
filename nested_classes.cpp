#include <bits/stdc++.h>
using namespace std;

class person
{
public:
  string name;

  class address
  {
  public:
    string country;
    string stname;
    int hno;
  };

  address addr;
  void addressplease()
  {
    cout << name << endl
         << addr.country << endl
         << addr.stname << endl
         << addr.hno << endl;
  }
};

int main()
{
  person vineeth;
  vineeth.name = "kuluru";
  vineeth.addr.country = "india";
  vineeth.addr.stname = "banjara hills";
  vineeth.addr.hno = 43;

  vineeth.addressplease();
  return 0;
}