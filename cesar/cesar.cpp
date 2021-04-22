#include <iostream>
#include <string>

using namespace std;

int dividir (int a, int n)
{
  int r=a-n*(a/n);
  int q=a/n;
  if (r<0)
  {
    q=q-1;
    r=a-(n*q);
  }
 return r;
}




class Algoritmo {
  private:
    int clavef=3;
  public:
  string alfabeto="abcdefghijklmnopqrstuvwxyz";
  int indice=0;
    
  string cifrado (string mensaje)
  {
    for( int x=0;x<mensaje.length();x++)
    {
      indice=alfabeto.find(mensaje[x]);
      indice=indice+clavef;
      if (indice>=alfabeto.length())
        {
          indice=dividir(indice,alfabeto.length());
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
  string descifrado (string mensaje)
  {
    for( int x=0;x<mensaje.length();x++)
    {
      indice=alfabeto.find(mensaje[x]);
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
      
      indice=0;
    }
      
  return mensaje;
  }

};

int main() {
  string saludo="holacomoestas";
  string cifrado;
  string descifrado;
  Algoritmo fernando;
  Algoritmo lucas;
  cifrado=fernando.cifrado(saludo);
  cout<<"Mensaje cifrado: "<<cifrado<<endl;
  descifrado=lucas.descifrado(cifrado);
  cout<<"Mensaje descifrado "<<descifrado;

}

