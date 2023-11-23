/* Escribe un programa en C++ que:

Crea una cadena utilizando la clase string.
Utiliza la función substr() para obtener una subcadena de la cadena.
Utiliza la función insert() para insertar otra cadena en la cadena.
Imprime la cadena resultante.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Tarta de queso";
    string sub_str = str.substr(0, 5);

    string new_str = str.insert(0, "con merengue ");

    cout << "Subcadena: " << sub_str << endl;
    cout << "Cadena resultante: " << new_str << endl;

    return 0;
}
