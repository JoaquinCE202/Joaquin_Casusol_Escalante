#include <iostream>
using namespace std;

class Algoritmo {
  private:
    int clavef=3,clavec=6;
  public:
    int contador=0;
    int contadory=0;
    
  string cifrado (string mensaje)
  {
    if (clavef*clavec>mensaje.length())
    {
      for (int x;x<clavef*clavec;x++)
      {
        if (x>mensaje.length())
        {
          mensaje.append(" ");
        }
      }
      string resultado=mensaje;
      for (int x=0;x<clavec;x++)
      {
        for (int y=0;y<clavef;y++)
        {
          resultado[y+contadory]=mensaje[x+contador];
          contador=contador+clavec;
        }
        contadory=contadory+clavef;
        contador=0;
      }
      return resultado;
    }
    else 
    {
      return "Claves incorrectas";
    }
  }

  string descifrado(string mensaje)
  {
    if (clavef*clavec>mensaje.length())
    {
    string resultado=mensaje;
      for (int x=0;x<clavef;x++)
    {
      for (int y=0;y<clavec;y++)
      {
        resultado[y+contadory]=mensaje[x+contador];
        contador=contador+clavef;
        }
      contador=0;
      contadory=contadory+clavec;
    }
    return resultado;
    }
    else 
    {
      return "Claves incorrectas";
    }
  }
};

int main() {
  Algoritmo carlos;
  Algoritmo juan;
  string mensaje_cifrado=carlos.cifrado("hola como estan");
  string mensaje_descifrado=juan.descifrado(mensaje_cifrado);
  cout<<"El mensaje crifrado queda: "<<mensaje_cifrado<<endl;
  cout<<"El mensaje descifrado queda: "<<mensaje_descifrado<<endl;
}


