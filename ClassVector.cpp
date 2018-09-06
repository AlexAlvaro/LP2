#include <iostream>
#include <string>
#include "vect.h"
using namespace std;
int main(){
  Vector<int> datosEntero;
  Vector<int> datoCadena;
  for (int i =0;i<10;i++){
    datosEntero.push_back(i);
    datoCadena.push_back("palabra");
  }
  for (int i =0;i<10;i++){
    cout<<datosEntero.get(i);
    cout<<datoCadena.get("palabra");
  }

  return 0;
}
