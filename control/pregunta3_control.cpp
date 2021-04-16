
#include <iostream>
#include <string>
#include <sstream>
 
using namespace std;

int main()
{
  string s = "";
 
  int n = 7;
  s = static_cast<ostringstream*>(&(ostringstream() << n))->str();
  cout << s + "hola" << endl;
}
