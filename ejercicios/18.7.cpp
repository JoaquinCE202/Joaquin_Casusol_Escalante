#include <iostream>
#include <string>

using namespace std;

class Algoritmo {
  private:
    int clavef=13;
  public:
  string alfabeto="abcdefghijklmnopqrstuvwxyz";
  int indice=0;
    
  string cifrado (string mensaje)
  {
    for( int x=0;x<mensaje.length();x++)
    {
      indice=alfabeto.find(mensaje[x]);
      if (indice!=string::npos)
      {
        indice=indice+clavef;
        if (indice>=alfabeto.length())
        {
          indice=indice%alfabeto.length();
          mensaje[x]=alfabeto[indice];
        }
        else
        {
          mensaje[x]=alfabeto[indice];
        } 
      }
      indice=0;
    }
      
  return mensaje;
  }
  string descifrado (string mensaje)
  {
    for( int x=0;x<mensaje.length();x++)
    {
      indice=alfabeto.find(mensaje[x]);
      if (indice!=string::npos)
      {
        indice=indice-clavef;
        if (indice<0)
        {
          indice=indice+alfabeto.length();
          mensaje[x]=alfabeto[indice];
        }
        else
        {
          mensaje[x]=alfabeto[indice];
        } 
      }
      indice=0;
    }
      
  return mensaje;
  }

};

int main() {
  string saludo="hola como estas me llamo fernando";
  string cifrado;
  string descifrado;
  Algoritmo fernando;
  Algoritmo lucas;
  cifrado=fernando.cifrado(saludo);
  cout<<cifrado<<endl;
  descifrado=lucas.descifrado(cifrado);
  cout<<descifrado;

}

