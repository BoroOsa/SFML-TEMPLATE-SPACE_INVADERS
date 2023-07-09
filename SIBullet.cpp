#include "SIBullet.h"
#include "SIPlayer.h"
#include <iostream>

SIBullet::SIBullet(int wysokosc_pocisku, int czy_wystrzelone)
{
  this->wysokosc_pocisku=550;
  this->czy_wystrzelone=0;
}

void SIBullet::strzal_gracza()
{
  czy_wystrzelone=1;
}

void SIBullet::ruch_naboju()
{
  if(czy_wystrzelone==1 and wysokosc_pocisku>0)
  {
    wysokosc_pocisku=wysokosc_pocisku-20;
  }
  else if(czy_wystrzelone and wysokosc_pocisku<0)
  {
    czy_wystrzelone=0;
    wysokosc_pocisku=550;
  }
  else
  {
  }
}

int SIBullet::get_bullet_height()
{
  return wysokosc_pocisku;
}

void SIBullet::restart_bullet()
{
  czy_wystrzelone=0;
  wysokosc_pocisku=550;
  
}
