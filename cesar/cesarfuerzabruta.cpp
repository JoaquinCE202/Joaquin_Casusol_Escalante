#include <iostream>
#include <string>

using namespace std;

string alfabeto="abcdefghijklmnopqrstuvwxyz";

class Algoritmo {
  private:
    int clavef=25;
  public:
  int indice=0;
    
  string cifrado (string mensaje)
  {
    for( int x=0;x<mensaje.length();x++)
    {
      indice=alfabeto.find(mensaje[x]);
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
        indice=0;
      }  
  return mensaje;
  }

};

class FuerzaBruta {
  public:
  int indice=0;
  int variable=0;
  string condicion;
  string var;
  int descifrado (string mensaje)
  {
    var=mensaje;
    while (variable<alfabeto.length())
    {
    variable++;
    for( int x=0;x<mensaje.length();x++)
    {
      indice=alfabeto.find(mensaje[x]);
        indice=indice-variable;
        if (indice<0)
        {
          indice=indice+alfabeto.length();
          mensaje[x]=alfabeto[indice];
        }
        else
        {
          mensaje[x]=alfabeto[indice];
        } 
      
      indice=0;
    }    
    cout<<"El mensaje descifrado es: "<<mensaje<<"con la clave: "<<variable<<endl;
    cout<<"Su mensaje es correcto si/no? ";
    cin>>condicion;
    if (condicion=="si")
    {
      break;
    }
    mensaje=var;
    }
  cout<<"El mensaje descifrado es: "<<mensaje<<endl;
  return variable;
  }
};

int main() {
  string saludo="holacomoestas";
  string cifrado;
  string descifrado;
  Algoritmo fernando;
  FuerzaBruta x;
  int clave;
  cifrado=fernando.cifrado(saludo);
  cout<<"Mensaje cifrado: "<<cifrado<<endl;
  clave=x.descifrado(cifrado);
  cout<<"La clave es: "<<clave;

}

