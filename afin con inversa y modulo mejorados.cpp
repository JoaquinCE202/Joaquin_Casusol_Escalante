#include <iostream> 
#include <stdlib.h>  
#include <stdio.h>
#include <string>
#include <time.h>


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
int mcd(int mcd1,int mcd2){
  int residuo=0;
  int aux;
  int var;
  while (mcd2>0)
  {
  residuo=dividir(mcd1,mcd2);
  var=mcd1/mcd2;
  aux=mcd2;
  mcd2=residuo;
  mcd1=aux;
  }
  return mcd1;
}

int euclides(int mcd1, int mcd2) {
  int residuo=0;
  int aux;
  int var;

  int x=0;
  int x1=1;
  int x2=0;

  int y=0;
  int y1=0;
  int y2=1;


  while (mcd2>0)
  {
      residuo=dividir(mcd1,mcd2);
      var=mcd1/mcd2;
      aux=mcd2;
      mcd2=residuo;
      mcd1=aux;

      x=x1-x2*(var);
      aux=x2;
      x2=x;
      x1=aux;

      y=y1-y2*(var);
      aux=y2;
      y2=y;
      y1=aux;



  }
  return x1; 
  };


int generar (int a,int tam){
  int respuesta=0;
  srand(time(NULL));
	a=rand()%26;
  while(respuesta!=1)
  {
    a=rand()%26;
    respuesta=mcd(a,tam);
  }
  return a;
}
int inversa(int mcd1, int mcd2,int moduloN) {
  int residuo=0;
  int aux;
  int var;

   int x=0;
   int x1=1;
   int x2=0;

   int y=0;
  int  y1=0;
  int y2=1;

   int resultado=mcd1;


  while (mcd2>0)
  {
      residuo=modulo(mcd1,mcd2);
      var=mcd1/mcd2;
      aux=mcd2;
      mcd2=residuo;
      mcd1=aux;

      x=x1-x2*(var);
      aux=x2;
      x2=x;
      x1=aux;

      y=y1-y2*(var);
      aux=y2;
      y2=y;
      y1=aux;



  }

  if(y1<0)
  {
    return modulo(y1,moduloN);
  }
  else
  {
    return (y1);
  }

  };

class afin{
  private:
    int a=0;
    int b=0;
  public:
  	int a1; 
  	int x1;
  	
  int getA();
  void setA(int);
  int getB();
  void setB(int);
  string alf="abcdefghijklmnopqrstuvwxyz";
    afin(){
      a=generar(a,alf.length());
      srand(time(NULL));
       b=rand()%26;
    }
    afin(int var1, int var2)
    {
    	a=var1;
    	b=var2;
      x1=euclides(var1,alf.length());
      a1=inversa(x1,alf.length());

    }
    string cifrado(string mensaje){
      int indice=0;
        for (int x=0;x<mensaje.length();x++)
        {
          indice=alf.find(mensaje[x]);
          indice=indice*a;
          if (indice>0)
          {
            indice=dividir(indice,alf.length());
          }
          indice=indice+b;
          if (indice>0)
          {
            indice=dividir(indice,alf.length());
          }
          mensaje[x]=alf[indice];
        }
      return mensaje;
    }  
    string descifrado(string mensaje){
      int indice=0;
        for (int x=0;x<mensaje.length();x++)
        {
          indice=alf.find(mensaje[x]);
          indice=indice-b;
          if (indice<0)
          {
            indice=dividir(indice,alf.length());
          }
          indice=indice*a1;
          if (indice>0)
          {
            indice=dividir(indice,alf.length());
          }
          mensaje[x]=alf[indice];
        }
      return mensaje;
    }  

};
int afin::getA() {
    return a;
}
void afin::setA(int newValue) {
    a = newValue;
}
int afin::getB() {
    return b;
}
void afin::setB(int newValue) {
    b = newValue;
}
int main(){
  afin emisor;
  afin receptor(emisor.getA(),emisor.getB());
  string mensaje;
  string mensajedes;
  mensaje=emisor.cifrado("wolfpack");
  mensajedes=receptor.descifrado(mensaje);
  cout<<mensaje<<endl<<mensajedes<<endl;





  
}
