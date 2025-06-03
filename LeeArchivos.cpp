#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    
    string EjemploLector = "perrosalchicha.txt";

    ifstream archivo(EjemploLector);

    
    if (!archivo) {
        cerr << "No se pudo abrir el archivo: " << EjemploLector << endl;
        return 1;
    }

    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();

    return 0;
}

