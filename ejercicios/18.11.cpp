#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string nombre;
  string apellido;
  cin>>nombre;
  cin>>apellido;
  string nombre_completo(nombre+' '+apellido);
  cout<<nombre_completo;
}

