/// Nombre: Alessandra Torres Hernandez

#include <iostream>
#include <string>
#include <vector> 

using namespace std;

// Clase base: Deporte
class Deporte {
protected:
    string nombre;
    int numeroJugadores;
    string tipoBalon;

public:
    Deporte(string nom, int jugadores, string balon)
        : nombre(nom), numeroJugadores(jugadores), tipoBalon(balon) {}

    virtual void mostrarDatos() const {
        cout << "Deporte: " << nombre << endl;
        cout << "Jugadores por equipo: " << numeroJugadores << endl;
        cout << "Tipo de balon/pelota: " << tipoBalon << endl;
    }

    virtual void tipoContacto() const = 0;

    virtual ~Deporte() {}
};

class Futbol : public Deporte {
public:
    Futbol() : Deporte("Futbol", 11, "Balon esferico") {}

    void mostrarDatos() const override {
        Deporte::mostrarDatos();
        cout << "Campo de juego: Cancha de cesped" << endl;
    }

    void tipoContacto() const override {
        cout << "Se juega principalmente con los pies." << endl;
    }
};

class Baloncesto : public Deporte {
public:
    Baloncesto() : Deporte("Baloncesto", 5, "Balon grande y ligero") {}

    void mostrarDatos() const override {
        Deporte::mostrarDatos();
        cout << "Campo de juego: Cancha cubierta" << endl;
    }

    void tipoContacto() const override {
        cout << "Se juega principalmente con las manos." << endl;
    }
};

class Voleibol : public Deporte {
public:
    Voleibol() : Deporte("Voleibol", 6, "Balon de voleibol") {}

    void mostrarDatos() const override {
        Deporte::mostrarDatos();
        cout << "Campo de juego: Cancha cubierta o arena" << endl;
    }

    void tipoContacto() const override {
        cout << "Se juega principalmente con las manos, sin permitir que el balon toque el suelo en tu lado." << endl;
    }
};

class TenisDeMesa : public Deporte {
public:
    TenisDeMesa() : Deporte("Tenis de Mesa", 1, "Pelota de ping-pong") {} 

    void mostrarDatos() const override {
        Deporte::mostrarDatos();
        cout << "Campo de juego: Mesa con red" << endl;
    }

    void tipoContacto() const override {
        cout << "Se juega utilizando una raqueta pequena (pala) para golpear la pelota." << endl;
    }
};

class Beisbol : public Deporte {
public:
    Beisbol() : Deporte("Beisbol", 9, "Pelota de beisbol") {}

    void mostrarDatos() const override {
        Deporte::mostrarDatos();
        cout << "Campo de juego: Campo de beisbol (diamante)" << endl;
    }

    void tipoContacto() const override {
        cout << "Se juega principalmente con las manos (guante y bate)." << endl;
    }
};


int main() {
    vector<Deporte*> listaDeportes;

    listaDeportes.push_back(new Futbol());
    listaDeportes.push_back(new Baloncesto());
    listaDeportes.push_back(new Voleibol());
    listaDeportes.push_back(new TenisDeMesa());
    listaDeportes.push_back(new Beisbol()); 


    cout << "--- Información de Deportes con Balón ---" << endl;
    cout << endl;

    
    for (size_t i = 0; i < listaDeportes.size(); ++i) {
        listaDeportes[i]->mostrarDatos();
        listaDeportes[i]->tipoContacto();
        cout << "---" << endl; 
    }

    
    for (size_t i = 0; i < listaDeportes.size(); ++i) {
        delete listaDeportes[i];
    }
    listaDeportes.clear();

    return 0;
}
