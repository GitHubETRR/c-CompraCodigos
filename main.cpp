#include <iostream>
using namespace std;

class Producto {
public:
    string nombre;
    string marca;
    int precio;
    int cantidad;

    void ingresarDatos(); 
    void mostrarDatos();
};

void Producto::ingresarDatos() {
    cout << "Ingrese el nombre del producto (Sin espacios): ";
    cin >> nombre;
    cout << "Ingrese la marca del producto: ";
    cin >> marca;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    cout << "Ingrese la cantidad: ";
    cin >> cantidad;
}

void Producto::mostrarDatos() {
    cout << "Nombre: " << nombre << ", Marca: " << marca << ", Precio: $, " << precio << "Cantidad:" << cantidad << "\n";
}

int main() {
    Producto productos[10]; // Definir Stock maximo
    int cantidad = 0;
    int opcion = 0;

    do {
        cout << "\nBienvenido a la tienda del Facundo\n";
        cout << "1. Ingresar producto\n";
        cout << "2. Ver productos\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            if (cantidad < 10) {
                productos[cantidad].ingresarDatos();
                cantidad++;
                cout << "Producto ingresado correctamente!!\n";
            } else {
                cout << "No se pueden ingresar más productos :/\n";
            }
            break;
        case 2:
            if (cantidad == 0) {
                cout << "No hay productos ingresados.\n";
            } else {
                cout << "Productos ingresados:\n";
                for (int i = 0; i < cantidad; i++) {
                    cout << i + 1 << ". ";
                    productos[i].mostrarDatos();
                }
            }
            break;
        case 3:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opción incorrecta\n";
            break;
        }
    } while (opcion != 3);

    return 0;
}
