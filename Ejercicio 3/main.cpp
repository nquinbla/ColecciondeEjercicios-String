/* Escribe un programa en C++ que:

Crea dos cadenas utilizando la clase string.
Utiliza el operador '+' para concatenar las dos cadenas y asignar el resultado a una tercera cadena.
Imprime la cadena resultante.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena1 = "Hola ";
    string cadena2 = "profe";
    string cadena3 = ", prefieres el vino blanco o el tinto?";
    string cadena4 = cadena1 + cadena2 + cadena3;
    cout << "Cadena resultante: " << cadena4 << endl;
    return 0;
}