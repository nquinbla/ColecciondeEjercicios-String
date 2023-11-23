/*Escribe un programa en C++ que:

Crea una cadena utilizando la clase string.
Utiliza la función size() para imprimir el tamaño de la cadena.
Utiliza la función empty() para comprobar si la cadena está vacía.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase = "Prefieres una tarta de queso con mermelada o sin mermelada?";
    cout << "Tamano de la cadena: " << frase.size() << "\n";
    cout << "La cadena esta vacia? " << (frase.empty() ? "Si" : "No") << "\n";
    cout << "La cadena es: " << frase << "\n";

    return 0;
}