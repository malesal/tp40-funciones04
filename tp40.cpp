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
    n=n*2;
    return n;
}

