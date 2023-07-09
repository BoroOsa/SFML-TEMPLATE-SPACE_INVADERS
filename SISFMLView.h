#ifndef SISFMLView_H__
#define SISFMLView_H__
#include "SIPlayer.h"
#include "SIEnemies.h"
#include "SIBullet.h"
#include <SFML/Graphics.hpp>


class SISFMLView
{
  SIPlayer & player;
  SIEnemies & enemies;
  SIBullet & bullet;
  
  sf::Texture gracz;
  sf::Texture przeciwnik;
  sf::Texture naboj;

  sf::Sprite Player;
  sf::Sprite Enemy;
  sf::Sprite Bullet;

  public:
  explicit SISFMLView( SIPlayer & player, SIEnemies &enemies, SIBullet & bullet);
  void drawOnWindow(sf::RenderWindow & win);
  int pierwsza_wspolrzedna_naboju;
  
};



#endif