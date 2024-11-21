#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
  int Eleccion;
  int EleccionCompu;
  do {
    cout << "Selecciona una opcion:\n 1.-Piedra \n 2.-Papel \n 3.-Tijera \n";
    cin >> Eleccion;
    cout<<"\033[2J\033[1;1H"; //Este socotroco sirve para limpiar la pantalla
    switch (Eleccion) {
    case 1:
      cout << "Elegiste Piedra\n";
      break;
    case 2:
      cout << "Elegiste papel\n";
      break;
    case 3:
      cout << "Elegiste tijera\n";
      break;
    }
  } while (Eleccion < 1 || Eleccion > 3);

  srand(time(NULL)); // Esta funcion la saqué de una pagina porque no me salía
  EleccionCompu = (rand() % 3) + 1;

  if (EleccionCompu == 1)
    cout << "\n¡La compu eligió Piedra!\n";
  else if (EleccionCompu == 2)
    cout << "\n¡La compu eligió Papel!\n";
  else if (EleccionCompu == 3)
    cout << "\n¡La compu eligió Tijera!\n";

  if ((Eleccion == 2 && EleccionCompu == 1) ||
      (Eleccion == 1 && EleccionCompu == 3) ||
      (Eleccion == 3 && EleccionCompu == 2))
    cout << "¡Ganaste!\n";
  else if (Eleccion == EleccionCompu)
    cout << "\nEmpate\n";
  else
    cout << "\nPerdiste\n";
  return 0;
}