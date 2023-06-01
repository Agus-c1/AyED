#include <iostream>
#include <cmath>
using namespace std;

double calculaPi (){

  double pi = 0.0;
  double signo = 1;
  double denominador = 1;

  for (int i = 0; i < 1000000; i++){
    pi += (4 / denominador) * signo;
    signo *= -1;
    denominador += 2;
  }
    return pi;
}
 
 int main()
 {
    double resultado = calculaPi();
    cout.precision(7);
    cout << "El valor de Pi es: " << resultado << endl;
    return 0;
 }
