
#ifndef SIBullet_H__
#define SIBullet_H__

#include <iostream>


class SIBullet
{
  int wysokosc_pocisku;
  
  public:
  SIBullet(int wysokosc_pocisku,int czy_wystrzelone);
  int czy_wystrzelone;
  void strzal_gracza();
  void ruch_naboju();
  int get_bullet_height();
  int get_bullet_width();  
  void restart_bullet();
};

#endif
