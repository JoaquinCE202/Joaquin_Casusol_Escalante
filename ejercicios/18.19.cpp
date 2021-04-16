#include <iostream>
#include <string>

using namespace std;

int main()
{
  string palabra;
  cin>>palabra;
  string asterisco="******";
  if (palabra.length()%2==0)
  {
  palabra.insert((palabra.length())/2, asterisco);
  cout<<palabra;
  }
  else if (palabra.length()%2!=0)
  {
  palabra.insert((palabra.length())/2, asterisco);
  cout<<"La palabra es de longitud impar: "<<palabra;
  }
}

