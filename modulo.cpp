#include <iostream>

using namespace std;

void dividir (int a, int n)
{
  int r=a-n*(a/n);
  int q=a/n;
  if (r<0)
  {
    q=q-1;
    r=a-(n*q);
  }
  cout<<"q es igual a : "<<q<<endl<<"r es igual a: "<<r;
}

int main() {
 dividir(10,4);
}

