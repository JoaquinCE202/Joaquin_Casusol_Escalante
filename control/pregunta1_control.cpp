#include <iostream>
#include <string>

using namespace std;

int main() {
  string cadena="hola a todos como estan";
  int caracteres=10;
  int conteo=0;
  int aux=0;
  string resultado1;

  cout<<"Ingrese el numero de caracteres: ";
  cin>>caracteres;
  string cadena2[cadena.length()/caracteres+1];
  string resultado2[cadena.length()/caracteres+1];

  for (int x=0;x<cadena.length()/caracteres+1;x++)
  {
    while(conteo<caracteres)
    {
      if(aux<cadena.length())
      {
      cadena2[x]=cadena2[x]+cadena[aux];
      aux++;
      conteo++;
      }
      else
      {
      cadena2[x]=cadena2[x]+'x';
      conteo++;        
      }
    }
  conteo=0;
  }

  for(int x=0;x<cadena.length()/caracteres+1;x++)
  {
    cout<<cadena2[x]<<endl;
  }

  for(int x=0;x<cadena.length()/caracteres+1;x++)
  {
    for(int y=0;y<cadena2[x].length();y++)
    {
      if(cadena2[x][y]!=' ')
      {
          resultado1=resultado1+cadena2[x][y];
      }
      else if (cadena2[x][y]==' ')
      {
        resultado1=resultado1+'*';
      }
    }
  }  
  cout<<resultado1<<endl;

  for(int x=0;x<cadena.length()/caracteres+1;x++)
  {
    resultado2[x]=cadena2[x];
  } 
  for(int x=0;x<cadena.length()/caracteres+1;x++)
  {
    cout<<resultado2[x]<<"/";
  }  

}
