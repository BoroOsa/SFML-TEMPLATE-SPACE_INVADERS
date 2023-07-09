#include "SIPlayer.h"
#include <iostream>
#include <vector>
using namespace std;


SIPlayer::SIPlayer(int szerokosc_gracza, int szerokosc_mapy)
{
  this->szerokosc_gracza=365;
  this->szerokosc_mapy=730;
  
}
int SIPlayer::get_player_width()
{
  return szerokosc_gracza;
}

void SIPlayer::ruch_w_prawo()
{
  if(szerokosc_gracza<szerokosc_mapy-35)
  {
    szerokosc_gracza=szerokosc_gracza+10;
  }
}

void SIPlayer::ruch_w_lewo()
{
  if(szerokosc_gracza>5)
  {
    szerokosc_gracza=szerokosc_gracza-10;
  }
  
}

