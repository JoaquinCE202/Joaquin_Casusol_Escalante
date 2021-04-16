#include <iostream>
#include <string>

using namespace std;

int main()
{

  string palabra="hola a todos";
  cout<<palabra<<endl;
  string::const_iterator iterador = palabra.end();
 
  while ( iterador != palabra.begin()-1 )
  {
  cout <<*iterador; 
  iterador--; 
  } 

  
}

