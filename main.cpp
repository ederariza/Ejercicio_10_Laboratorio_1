/*
Ejercicio 10. Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos de dicho número entre 1 y 100.
Ej: si se ingresa 33 se debe imprimir:
Multiplos de "33"  menores que 100:
33
66
99
*/

#include <iostream>

using namespace std;

int main(){

    int numero_N;
    cout << "Ingrese el numero N: ";
    cin >> numero_N;
    cout << "Multiplos del " << numero_N << " menores que 100 :" << endl;

    for(int i=1; i<100; i++){

        if(i>=numero_N && i%numero_N ==0){
            cout << i << endl;
        }
    }
    return 0;
}
