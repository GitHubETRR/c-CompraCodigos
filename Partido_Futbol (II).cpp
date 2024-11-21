#include <iostream>
#include <cstdlib> 
#include <ctime> 

#include <unistd.h>
using namespace std;
int Goles_1 = 0;
int Goles_2 = 0;
int resultado = 0; 
int equipo;
int main(){
  do{
    cout << "Bienvenid@ a la segunda edicion del simulador de futbol \n";
    cout << "Por favor, eija un equipo (1-2):";
    cin >> equipo;
    
  }while(equipo!=1 && equipo!=2);
  cout << "\nEl equipo elegido es el: " << equipo;
  cout << "\n Aguante corazón, Aguante. ¡¡Ya se viene el partido!! \n\n";
  cout<<"---------------------------0-----------------------------\n\n";
  srand(time(0));
  Goles_1 = rand() %4;
  Goles_2 = rand() %4;
  sleep(7);
  cout<<"Primer tiempo finalizado, el resultado por ahora es: \n";
  cout << "Equipo 1:" << Goles_1 << " goles\n";
  cout << "Equipo 2:" << Goles_2 << " goles\n\n";
  cout<<"---------------------------0-----------------------------\n\n";
 sleep(7);
  Goles_1 = Goles_1 + rand() %4;
  Goles_2 = Goles_2 + rand() %4;
  
  cout << "Equipo 1:" << Goles_1 << " goles\n";
  cout << "Equipo 2:" << Goles_2 << " goles\n";
  cout << "¡¡Terminó el partido!! \n";  
  
 if (Goles_1 > Goles_2) {
    cout << "Ganó el equipo 1";
  } else if (Goles_1 < Goles_2) {
    cout << "Ganó el equipo 2";
  } else {
    cout << "El partido terminó en empate";
  }
  return 0;
}