#include <iostream>
using namespace std;
int Goles_1 = 0;
int Goles_2 = 0;
int resultado = 0; 
int equipo;
int main(){
  do{
    cout << "Bienvenid@ al programa de Facundo el facha Vasile \n";
    cout << "Por favor, eija un equipo (1-2):";
    cin >> equipo;
    
  }while(equipo!=1 && equipo!=2);
  cout << "\nEl equipo elegido es el: " << equipo;
  cout << "\nA continuacion se jugará el partido, ¡agarrá los botines! \n";
  srand(time(0));
  Goles_1 = rand() %6;
  Goles_2 = rand() %6;
  cout << "Equipo 1:" << Goles_1 << " goles\n";
  cout << "Equipo 2:" << Goles_2 << " goles\n";

 if (Goles_1 > Goles_2) {
    cout << "Ganó el equipo 1";
  } else if (Goles_1 < Goles_2) {
    cout << "Ganó el equipo 2";
  } else {
    cout << "El partido terminó en empate";
  }
  return 0;
}