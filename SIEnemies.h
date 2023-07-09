
#ifndef SIEnemies_H__
#define SIEnemies_H__
#include <vector>
#include <iostream>


class SIEnemies
{
  int kierunek_ruchu;
  int szerokosc_mapy;
  int wysokosc_mapy;
  int ile_razy_nastapila_zmiana;
  std::vector<std::pair<int,int>>vec={};
  
  public:
  SIEnemies( int szerokosc_mapy, int wysokosc_mapy, int kierunek_ruchu);
  void ruch_wroga();
  void strzal_wroga();
  int get_enemy_width(int x);
  int get_enemy_height(int y);
  //void remove_enemy(int i);
  void remove_enemy(int i, int j);
};

#endif
