#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  string palabra="hola como estan todos, buen dia. Muchas gracias por la invitacion";
  string signos=",.;:";
  int indice;
  char *token;
  char cadena;
  
  for (int x=0;x<palabra.length();x++)
  {
    indice=signos.find(palabra[x]);
    if (indice!=string::npos)
    {
      palabra[x]=' ';
    }
  }
  cout<<"Palabra sin signos: "<<palabra<<endl;

 char *puntero1 = 0; 
  int longitud = palabra.length();
  char *puntero2 = new char[ longitud + 1 ]; // incluyendo el carácter nulo
 
  
 palabra.copy( puntero2, longitud, 0 ); 
  puntero2[ longitud ] = '\0';

  puntero1= palabra.data(); 

 token = strtok( puntero1, " " );
 

  while ( token != NULL )
  {
  cout << token << '\n';
 token = strtok( NULL, " " ); 
  }
  
}

