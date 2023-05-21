#include <iostream>

using namespace std;

void CalcularDoble(int n);

int main(){
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    CalcularDoble(num);
    return 0;
}

void CalcularDoble(int n){
    cout << "El doble del numero " << n << " es " << n * 2 << endl;
}

