#ifndef SIPlayer_H__
#define SIPlayer_H__


class SIPlayer
{
  int szerokosc_gracza;
  int szerokosc_mapy;
  int pozycja_naboju;


  
  public:
  SIPlayer(int szerokosc_gracza, int szerokosc_mapy );
  void strzal_gracza();
  void ruch_w_prawo();
  void ruch_w_lewo();
  int get_player_width();

};

#endif