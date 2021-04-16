#include <iostream>
#include <string>

using namespace std;
int const n=8;
int main()
{
  int i=0;
  int aux;
  int resultado;
  string lista[n] ={"c","a","b","r","x","z","d","e"};
  while(i<n)
  {
  aux=i;
  for(int x=0;x<n;x++)
  {
    resultado=lista[i].compare(lista[x]);
    if (resultado<0)
    {
      lista[i].swap(lista[x]);
    }
  }
  i++;
}
  for(int x=0;x<n;x++)
  {
    cout<<lista[x]<<endl;
  }
}


