#include <stdlib.h> 
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int condicion=1;
  int a;
  a=rand()%5;
  string texto[5]={"hamburguesa","hola","algoritmo","barcelona","messi"};
  string palabra=texto[a];
  int conteo=0;
  int error=0;
  string finalizar_juego;
  int indice=0;
  char adivinar;
  string incognito (palabra.length(), 'x');

  cout<<"Adivine la palabra: "<<incognito<<endl;
  while (condicion==1)
  {
    if (error!=5)
    {
      if (conteo<palabra.length())
      {
      cout<<"Escriba una letra: ";
      cin>>adivinar;
      indice=palabra.find(adivinar);
      if (indice==string::npos)
      {
        error++;
        cout<<"INCORRECTO"<<endl;
      }
      else
      {
        cout<<"CORRECTO"<<endl;
      }
      while (indice!=string::npos)
      {
        conteo=conteo+1;
        incognito[indice]=palabra[indice];
        palabra[indice]='*';
        indice=palabra.find(adivinar);
      }
      }
    }
  if(error>0)
  {
      if(error==1)
      {
        cout<<"O"<<endl;;
      }
      else if (error==2)
      {
        cout<<"O"<<endl;
        cout<<"|"<<endl;
      }
      else if (error==3)
      {
        cout<<" O"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
      }
      else if (error==4)
      {
        cout<<" O"<<endl;
        cout<<" |"<<endl;
        cout<<" |"<<endl;
        cout<<"l l"<<endl;
      }
      else if (error==5)
      {
        cout<<"perdiste"<<endl;
        cout<<"Desea jugar de nuevo si/no: ";
        cin>>finalizar_juego;
        if (finalizar_juego=="si")
        {
          condicion=1;
          conteo=0;
          palabra=texto[rand()%5];
          incognito=palabra;
          for (int x=0;x<incognito.length();x++)
          {
            incognito[x]='x';
          }
          error=0;

        }
        else if (finalizar_juego=="no")
        {
          condicion=0;
          break;
        }
        else 
        {
          cout<<"comando invalido"<<endl;
        }
      }
  }
  cout<<incognito<<endl;


  if (conteo==palabra.length())
  {
    cout<<"Felicidades, adivinó la palabra. La palabra era: "<<incognito<<endl;
    cout<<"Desea jugar de nuevo si/no: ";
    cin>>finalizar_juego;
    if (finalizar_juego=="si")
    {
          condicion=1;
          conteo=0;
          palabra=texto[rand()%5];
          incognito=palabra;
          for (int x=0;x<incognito.length();x++)
          {
            incognito[x]='x';
          }
          cout<<incognito<<endl;
          error=0;

    }
    else if (finalizar_juego=="no")
    {
      condicion=0;
    }
    else 
    {
      cout<<"comando invalido"<<endl;
    }
  }
  }

}

