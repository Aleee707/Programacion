#include <iostream>
#include <cmath> 
using namespace std;

class Circulo {
private:
    float radio;

public:
    void setRadio(float r) {
        radio = r;
    }

    float calcularArea() const {
        return M_PI * radio * radio;
    }

    float calcularPerimetro() const {
        return 2 * M_PI * radio;
    }
};

int main() {
    Circulo miCirculo;
    float r;

    cout << "Ingresa el radio del circulo: ";
    cin >> r;

    if (r <= 0) {
        cout << "El radio debe ser un valor positivo." << endl;
        return 1;
    }

    miCirculo.setRadio(r);

    cout << "Area del circulo: " << miCirculo.calcularArea() << endl;
    cout << "Perimetro del circulo: " << miCirculo.calcularPerimetro() << endl;

    return 0;
}

