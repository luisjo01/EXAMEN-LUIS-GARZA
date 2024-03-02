#include <iostream>
#include <string>

using namespace std;

//clase maquinaria Luis Garza
class Maquinariayequipo {
public:
    // Atributos
    string tipo;
    string marca;
    float precio;
    string color;
    string potencia;
    string transmision;
    string combustible;
    string tamaño;
    string capacidad;

    // Constructor
    Maquinariayequipo(string _tipo, string _marca, float _precio, string _color, string _potencia, string _transmision, string _combustible, string _tamaño, string _capacidad) {
        tipo = _tipo;
        marca = _marca;
        precio = _precio;
        color = _color;
        potencia = _potencia;
        transmision = _transmision;
        combustible = _combustible;
        tamaño = _tamaño;
        capacidad = _capacidad;
        // mensaje para cuando se crean los atributos
        cout << "Se creo el objeto de maquinaria" << endl;
    }

    // se ocupa para cuando se destruye el objeto que ya habiamos creado
    ~Maquinariayequipo() {
        cout << "Se destruyo el objeto de maquinaria" << endl;
    }

    // como funciona la maquinaria o el equipo creado, es el métddo
    void utilizar() {
        cout << "Utilizando " << tipo << " de marca " << marca << endl;
    }

    // vamos a imprimir como si estuviéramos iniciando y comprando maquinaria y equipo
    void comprar() {
        cout << "Compramos " << tipo << " de marca " << marca << " a Q" << precio << endl;
    }
};

// Función principal
int main() {
    // Vamos a crear los objetos de maquinaria
    Maquinariayequipo tractor("Tractor", "Ford", 150000.0, "Rojo", "100 HP", "Manual", "Diesel", "", "");
    Maquinariayequipo segadora("Segadora", "Fiat", 100000.0, "Verde", "", "", "", "Grande", "5 toneladas");
    Maquinariayequipo perforadora("Perforadora", "Still", 10000.0, "Amarillo", "200 rpm", "", "", "Mediano", "");
    Maquinariayequipo bombaagua("Bomba de Agua", "YameaburriJAJA", 15000.0, "Azul", "", "", "", "Pequeño", "1800 rpm");
    Maquinariayequipo panelsolar("Panel Solar", "Tio Elon", 2000.0, "Negro", "", "", "", "Grande", "1000 W");

    // vamos a llamar a los metodos que creamos
    tractor.utilizar();
    tractor.comprar();

    segadora.utilizar();
    segadora.comprar();

    perforadora.utilizar();
    perforadora.comprar();

    bombaagua.utilizar();
    bombaagua.comprar();

    panelsolar.utilizar();
    panelsolar.comprar();

    return 0;
}//saludos inge :D
