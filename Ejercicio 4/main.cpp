/* Escribe un programa en C++ que:

Crea una cadena utilizando la clase string.
Utiliza la función find() para buscar una subcadena en la cadena y imprime el índice de inicio de la subcadena.
Utiliza la función replace() para reemplazar la subcadena por otra subcadena.
Imprime la cadena resultante.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase1 = "Los mejores restaurates son los italianos, pero no acepto discusiones";
    string sub_str = "pero no acepto discusiones";

    size_t pos = frase1.find(sub_str);

    if (pos != string::npos) {
        cout << "La subcadena se encuentra en la posicion: " << pos << endl;
    } else {
        cout << "La subcadena no se encuentra en la cadena" << endl;
    }

    frase1.replace(pos, sub_str.length(), "pero acepto discusiones");

    cout << frase1 << endl;

    return 0;
}