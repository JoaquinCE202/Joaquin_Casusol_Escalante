#include <iostream>


using namespace std;


class Algoritmo {
  private:
    int clave=3;
  public:
    int contador=0;
    int contador2=0;
    int condicion;
    
  string cifrado (string mensaje)
{
    string resultado;
    string ordenado;
    int variable=0;
    condicion=0;
    for (int x=0;x<mensaje.length()*clave;x++)
    {
          resultado=resultado+'*';
    }
    

    for (int x=0;x<mensaje.length();x++)
    {
       resultado[x+contador]=mensaje[x];


       if (condicion==0)
       {
          contador=contador+mensaje.length();
          if (contador>=mensaje.length()*clave)
          {
            contador=contador-mensaje.length();;
            condicion=1;
          }
       }

        if (condicion==1)
       {
          contador=contador-mensaje.length();
          if (contador<=0)
          {
            
            condicion=0;
          }
       }
      
      
    }
  for(int x=0; x<clave;x++)
  {
    for (int y=0;y<mensaje.length();y++)
    {
      if (resultado[variable]!='*')
      {
        ordenado=ordenado+resultado[variable];
      }
          variable=variable+1;
    }
  }
    return ordenado;
}

string descifrado(string mensaje)
{
    string resultado;
    string ordenado;
    int variable=0;
    int contador=0;
    int aux =0;
    condicion=0;
    for (int x=0;x<mensaje.length()*clave;x++)
    {
          resultado=resultado+'x';
    }
    for (int x=0;x<mensaje.length();x++)
    {
       resultado[x+contador]='*';


       if (condicion==0)
       {
          contador=contador+mensaje.length();
          if (contador>=mensaje.length()*clave)
          {
            contador=contador-mensaje.length();;
            condicion=1;
          }
       }

        if (condicion==1)
       {
          contador=contador-mensaje.length();
          if (contador<=0)
          {
            
            condicion=0;
          }
       }
      
    }
    
    
  contador=0;
  for(int x=0; x<mensaje.length()*clave;x++)
  {
    if (resultado[x]=='*')
    {
      resultado[x]=mensaje[contador];
      contador++;
    }
  }
  
  for(int x=0; x<mensaje.length();x++)
  {
    aux=0;
    for (int y=0; y<clave;y++)
    {
      if (resultado[aux+x]!='x')
      {
        ordenado=ordenado+resultado[aux+x];
      }
    aux=aux+mensaje.length();
    }
  }
    


  return ordenado;

}
};




int main() {
  Algoritmo carlos;
  Algoritmo juan;
  string mensaje_cifrado=carlos.cifrado("Hola que tal");
  cout<<mensaje_cifrado<<endl;
  string msg=juan.descifrado(mensaje_cifrado);
  cout<<msg;
  


}

