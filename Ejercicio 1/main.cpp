// Ejercicio 1:Escribe un programa en C++ que utilice la clase string de la STL para representar una frase y luego imprime esa frase en la consola.

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    string frase1;
    string frase2;

    string frase3 = "Hola mundo";
    string frase4(frase3);

    string frase5(frase3.begin(), frase3.end());
    string frase6(frase3, 0, frase3.length());
    cout << frase1 << "" << frase2 << endl;
    cout << frase3 << "" << frase4 << endl;
    cout << frase5 << "" << frase6 << endl;

    return 0;

}